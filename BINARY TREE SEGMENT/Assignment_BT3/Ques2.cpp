// PathSum I - Leetcode 112
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
    bool helper(Node* root, int sum){
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL){
            if(root->val==sum) return true;
        }
        bool ans = helper(root->left, sum-(root->val));
        if(ans==true) return true;
        bool ans2 = helper(root->right, sum-(root->val));
        if(ans2==true) return true;
        return false;
    }
    bool hasPathSum(Node* root, int targetSum) {
        return helper(root, targetSum);
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
    cout<<s.hasPathSum(a, 7);
    return 0;
}