// Leetcode 938 -- Range Sum BST
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
    void inorder(Node* root, vector<int>& v){
        if(root==NULL) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    int rangeSumBST(Node* root, int low, int high) {
        vector<int> ans;
        inorder(root, ans);
        bool flag = false;
        int sum = 0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==low){
                flag = true;
                sum += ans[i];
                continue;
            }
            else if(ans[i]==high){
                sum += ans[i];
                flag = false;
            }
            else if(flag==true) sum += ans[i];
        }
        return sum;
    }
};
int main(){
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(15);
    Node* d = new Node(3);
    Node* e = new Node(7);
    Node* f = new Node(18);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    Solution s;
    cout<<s.rangeSumBST(a, 7, 15);
}