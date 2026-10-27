// Leetcode - 101 Symmetric Tree
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
    bool sameTree(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;

        if(p->val != q->val) return false;

        bool leftAns = sameTree(p->left,q->left);
        if(leftAns==false) return false;
        bool rightAns = sameTree(p->right,q->right);
        if(rightAns==false) return false;
        return true;
    }
    TreeNode* invertTree(TreeNode* root){
        if(root==NULL) return NULL;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
    bool isSymmetric(TreeNode* root) {
        return sameTree(root->left, invertTree(root->right));
    }
};
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(2);
    TreeNode* d = new TreeNode(3);
    TreeNode* e = new TreeNode(4);
    TreeNode* f = new TreeNode(4);
    TreeNode* g = new TreeNode(3);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    Solution s;
    cout<<s.isSymmetric(a);
}