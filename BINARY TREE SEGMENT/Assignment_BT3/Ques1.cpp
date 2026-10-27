// Left Side View of a binary tree
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
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
    void helper(Node* root, vector<int>& ans, int curr){
        if(root==NULL) return;
        ans[curr] = root->val;
        helper(root->right, ans, curr+1);
        helper(root->left, ans, curr+1);
    }
    vector<int> leftView(Node *root) {
        // code here
        if(root==NULL) return {};
        int n = levels(root);
        vector<int> ans(n, 0);
        helper(root, ans, 0);
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
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    Solution s;
    vector<int> v = s.leftView(a);
    for(int ele : v) cout<<ele<<" ";
    return 0;
}