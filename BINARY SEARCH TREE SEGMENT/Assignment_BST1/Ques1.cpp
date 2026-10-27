// Leetcode - 230 Kth smallest element in a BST
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
    void inorder(Node* root, vector<int>& ans){
        if(root==NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    int kthSmallest(Node* root, int k) {
        vector<int> ans;
        inorder(root, ans);
        return ans[k-1];
    }
};
int main(){
    Node* a = new Node(3);
    Node* b = new Node(1);
    Node* c = new Node(4);
    Node* d = new Node(2);

    a->left = b;
    a->right = c;
    b->right = d;
    Solution s;
    cout<<s.kthSmallest(a, 1);
}