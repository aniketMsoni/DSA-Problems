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
    void helper(TreeNode* root, vector<string>& res, string temp){
        if(root==NULL) return;
        string a = to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            temp += a;
            res.push_back(temp);
            return;
        }
        helper(root->left, res, temp+a+"->");
        helper(root->right, res, temp+a+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        helper(root, res, "");
        return res;
    }
};
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(5);
    a->left = b;
    a->right = c;
    b->right = d;
    Solution s;
    vector<string> z = s.binaryTreePaths(a);
    for(string ele : z) cout<<ele<<endl;
}