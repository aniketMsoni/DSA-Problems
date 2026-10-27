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
    void allLeft(Node* root, int &mn){
        if(root==NULL) return;
        if(root->left==NULL ){
            mn = root->val;
            return;
        }
        allLeft(root->left, mn);
    }
    void allRight(Node* root, int &mx){
        if(root==NULL) return;
        if(root->right==NULL ){
            mx = root->val;
            return;
        }
        allRight(root->right, mx);
    }
    vector<int> maxAndMin(Node* root){
        int mn = root->val;
        int mx = root->val;
        allLeft(root, mn);
        allRight(root, mx);
        vector<int> ans = {mn, mx};
        return ans;
    }
};
int main(){
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(15);
    Node* d = new Node(2);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(18);
    Node* h = new Node(6);
    Node* i = new Node(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    e->left = h;
    f->right = i;
    Solution s;
    vector<int> ans = s.maxAndMin(a);
    for(int ele : ans) cout<<ele<<" ";
}