#include<iostream>
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
int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
int main(){
    Node* a = new Node(2);
    Node* b = new Node(4);
    Node* c = new Node(10);
    Node* d = new Node(6);
    Node* e = new Node(15);
    Node* g = new Node(11);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = g;
    cout<<levels(a)<<endl;
}