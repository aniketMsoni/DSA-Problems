#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) : val(val), left(NULL), right(NULL) {}
};
Node* pred(Node* root){
    if(root==NULL) return NULL;
    Node* pred = root->left;
    while(pred->right != NULL){
        pred = pred->right;
    }
    return pred;
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
    Node* i = new Node(3);
    Node* j = new Node(12);
    Node* k = new Node(13);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right - e;
    d->right = h;
    h->left = i;
    c->left = f;
    c->right = g;
    f->left = j;
    j->right = k;
    Node* temp = pred(c);
    if(temp!=NULL) cout<<temp->val;
}