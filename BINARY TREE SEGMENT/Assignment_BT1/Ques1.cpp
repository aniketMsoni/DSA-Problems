// Multiplication of all nodes values of a binary tree
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};
int multiplyTreeNodes(Node* root){
    if(root==NULL) return 1;
    return root->val * multiplyTreeNodes(root->left) * multiplyTreeNodes(root->right);
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(-1);
    Node* c = new Node(-3);
    Node* d = new Node(4);
    Node* e = new Node(8);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout<<multiplyTreeNodes(a);
}