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
    int ans = INT_MIN;
    void inorder(Node* root, int k, int& idx){
        if(root==NULL) return;
        inorder(root->left, k, idx);
        idx++;
        if(k==idx){
            ans = root->val;
            return;
        }
        inorder(root->right, k, idx);
    }
    int kthSmallest(Node* root, int k) {
        int curr = 0;
        inorder(root, k, curr);
        return ans;
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