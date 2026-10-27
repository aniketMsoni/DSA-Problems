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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;

        if(p->val != q->val) return false;

        bool LSTans = isSameTree(p->left, q->left);
        if(LSTans==false) return false;

        bool RSTans = isSameTree(p->right, q->right);
        if(RSTans==false) return false;

        return true;
    }
};
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(1);
    TreeNode* e = new TreeNode(2);
    TreeNode* f = new TreeNode(3);
    a->left = b;
    a->right = c;
    d->left = e;
    d->right = f;
    Solution s;
    cout<<s.isSameTree(a,d);
}