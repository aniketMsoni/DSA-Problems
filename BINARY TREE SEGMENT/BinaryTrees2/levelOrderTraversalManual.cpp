#include<iostream>
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
void printNthLevel(Node* root, int curr, int level){
    if(root==NULL) return;
    if(level==curr){
        cout<<root->val<<" ";
        return;
    }
    printNthLevel(root->left, curr+1, level);
    printNthLevel(root->right, curr+1, level);
}
void levelorderTraversal(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        printNthLevel(root, 1, i);
        cout<<endl;
    }
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(7);
    Node* c = new Node(9);
    Node* d = new Node(2);
    Node* e = new Node(6);
    Node* f = new Node(9);
    Node* g = new Node(5);
    Node* h = new Node(11);
    Node* i = new Node(5);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    e->left = g;
    e->right = h;
    f->left = i;

    levelorderTraversal(a);
}