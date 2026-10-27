#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) : val(val), left(NULL), right(NULL) {}
};
Node* succ(Node* root){
    if(root==NULL) return NULL;
    Node* suc = root->right;
    while(suc->left != NULL){
        suc = suc->left;
    }
    return suc;
}
class Solution {
public:
    void helper(Node* root, int lo, int hi){
        if(root==NULL) return;
        while(root->left!=NULL){
            if(root->left->val < lo)
                root->left = root->left->right;
            else if(root->left->val > hi)
                root->left = root->left->left;
            else break;
        }
        while(root->right!=NULL){
            if(root->right->val > hi)
                root->right = root->right->left;
            else if(root->right->val < lo)
                root->right = root->right->right;
            else break;
        }
        helper(root->left, lo, hi);
        helper(root->right, lo, hi);
    }
    Node* trimBST(Node* root, int lo, int hi) {
        Node* dummy = new Node(INT_MAX);
        dummy->left = root;
        helper(dummy, lo, hi);
        return dummy->left;
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
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(20);
    Node* d = new Node(2);
    Node* e = new Node(8);
    Node* f = new Node(15);
    Node* g = new Node(25);
    Node* h = new Node(4);
    Node* j = new Node(12);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    d->right = h;
    c->left = f;
    c->right = g;
    f->left = j;
    Solution s;
    Node* ans = s.trimBST(a, 10, 28);
    bfsTraversal(ans);
}