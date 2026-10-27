// Leetcode 1382 -- return balanced BST
#include<iostream>
#include<queue>
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
    void inorder(Node* root, vector<int>& ans){
        if(root==NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    Node* constructBST(vector<int>& ans, int lo, int hi){
        if(lo>hi) return NULL;
        int mid = lo + (hi-lo)/2;
        Node* root = new Node(ans[mid]);
        root->left = constructBST(ans, lo, mid-1);
        root->right = constructBST(ans, mid+1, hi);
        return root;
    }
    Node* balanceBST(Node* root) {
        vector<int> ans;
        inorder(root, ans);
        return constructBST(ans, 0, ans.size()-1);
    }
};
void bfsTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        int n = q.size();
        for(int i=0;i<n;i++){
            Node* temp = q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
        }
        cout<<endl;
    }
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);

    a->right = b;
    b->right = c;
    c->right = d;
    Solution s;
    Node* temp = s.balanceBST(a);
    bfsTraversal(temp);
}