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
    bool exists(TreeNode* root, TreeNode* temp){
        if(root==NULL) return false;
        if(root==temp )return true;
        return exists(root->left, temp) || exists(root->right, temp);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p==root || q==root) return root;
        else if(exists(root->left, p) && exists(root->right, q)) return root;
        else if(exists(root->right, p) && exists(root->left, q)) return root;
        else if(exists(root->left, p) && exists(root->left, q)) return lowestCommonAncestor(root->left, p, q);
        else return lowestCommonAncestor(root->right, p, q);
    }
};
int main(){
    TreeNode* a = new TreeNode(3);
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(1);
    TreeNode* d = new TreeNode(6);
    TreeNode* e = new TreeNode(2);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(2);
    TreeNode* h = new TreeNode(7);
    TreeNode* i = new TreeNode(4);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    e->left = h;
    e->right = i;
    Solution s;
    TreeNode* z = s.lowestCommonAncestor(a,b,c);
    cout<<z->val<<endl;

}