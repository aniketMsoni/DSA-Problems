#include<iostream>
#include<vector>
#include<stack>
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
    void helper(Node* root, vector<int>& ans, int curr, int level){
        if(root==NULL) return;
        if(level==curr){
            ans[curr] = root->val;
            return;
        }
        helper(root->left, ans, curr+1, level);
        helper(root->right, ans, curr+1, level);
    }
    vector<int> rightSideView(Node* root) {
        int n = levels(root);
        vector<int> ans(n, 0);
        for(int i=0;i<n;i++){
            helper(root, ans, 0, i);
        }
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
    vector<int> v = s.rightSideView(a);
    for(const auto& ele : v) cout<<ele<<" ";
    return 0;
}