// Leetcode - 110 Balanced Binary Tree
#include<iostream>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x) , left(NULL), right(NULL) {}
};
class Solution {
public:
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int leftLevel = levels(root->left);
        int rightLevel = levels(root->right);
        if(abs(leftLevel-rightLevel)>1) return false;
        bool result1 = isBalanced(root->left);
        if(result1==false) return false;
        bool result2 = isBalanced(root->right);
        if(result2==false) return false;
        return true;
    }
};
int main(){
    TreeNode* a = new TreeNode(3);
    TreeNode* b = new TreeNode(9);
    TreeNode* c = new TreeNode(20);
    TreeNode* d = new TreeNode(15);
    TreeNode* e = new TreeNode(7);
    a->left = b;
    a->right = c;
    c->left = d;
    c->right = e;
    Solution s;
    cout<<s.isBalanced(a);
}