// Level Order Traversal -- Right to Left -- BFS approach
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
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
    void helper(Node* root, int curr, int level, vector<int>& v){
        if(root==NULL) return;
        if(level==curr){
            v.push_back(root->val);
            return;
        }
        helper(root->left, curr+1, level, v);
        helper(root->right, curr+1, level, v);
    }
    vector<vector<int>> zigzagLevelOrder(Node* root) {
        vector<vector<int>> ans;
        int n = levels(root);
        int x = 0;
        for(int i=0;i<n;i++){
            vector<int> v;
            helper(root, 0, i, v);
            if(x%2!=0) reverse(v.begin(), v.end());
            ans.push_back(v);
            x++;
        }
        return ans;
    }
};
int main(){
    Node* a = new Node(3);
    Node* b = new Node(9);
    Node* c = new Node(20);
    Node* d = new Node(15);
    Node* e = new Node(7);

    a->left = b;
    a->right = c;
    c->left = d;
    c->right = e;

    Solution s;
    vector<vector<int>> ans = s.zigzagLevelOrder(a);
    for(const auto& row : ans){
        for(const auto& col : row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}