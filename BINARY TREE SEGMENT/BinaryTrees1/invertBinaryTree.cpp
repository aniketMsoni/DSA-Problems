#include<iostream>
#include<vector>
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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
    void display(TreeNode* root){
        if(root==NULL) return;
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }
};
int main(){
    TreeNode* a = new TreeNode(2);
    TreeNode* b = new TreeNode(1);
    TreeNode* c = new TreeNode(3);
    a->left = b;
    a->right = c;
    Solution s;
    TreeNode* z = s.invertTree(a);
    s.display(z);
}