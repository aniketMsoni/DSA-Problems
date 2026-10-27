// // Leetcode - 230 Kth smallest element in a BST
#include<iostream>
#include<vector>
#include<climits>
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
    void inorder(Node* root, vector<int>& ans){
        if(root==NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    vector<int> minAndMaxNodeValues(Node* root){
        vector<int> ans;
        inorder(root, ans);
        vector<int> v;
        v.push_back(ans[0]);
        if(ans.size()!=1) v.push_back(ans[ans.size()-1]);
        return v;
    }
};
int main(){
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(15);
    Node* d = new Node(2);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(18);
    Node* h = new Node(6);
    Node* i = new Node(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    e->left = h;
    f->right = i;
    Solution s;
    vector<int> ans = s.minAndMaxNodeValues(a);
    for(int ele : ans) cout<<ele<<" ";
}