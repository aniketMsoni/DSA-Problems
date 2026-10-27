#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
class Solution {
public:
    int levels(Node* root){
        if(root==NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    void lOrder(Node* root, vector<vector<int>>& ans, int level){
        if(root==NULL) return;
        ans[level].push_back(root->val);
        lOrder(root->left, ans, level+1);
        lOrder(root->right, ans, level+1);
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        int l = levels(root);
        for(int i=1;i<=l;i++){
            vector<int> temp;
            ans.push_back(temp);
        }
        lOrder(root, ans, 0);
        return ans;
    }
};
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    Solution s;
    vector<vector<int>> v = s.levelOrder(a);
    for(const auto& row : v){
        for(const auto& rows : row) cout<<rows<<" ";
        cout<<endl;
    }
}