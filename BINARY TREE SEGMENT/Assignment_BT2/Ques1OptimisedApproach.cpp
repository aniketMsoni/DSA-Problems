#include<iostream>
using namespace std;
int maxDia = 0;
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
int dfs(Node* root){
    if(root==NULL) return 0;
    int leftAns = dfs(root->left);
    int rightAns = dfs(root->right);
    maxDia = max(maxDia, leftAns+rightAns);
    return 1 + max(leftAns,rightAns);
}
int diameter(Node* root){
    maxDia = 0;
    dfs(root);
    return maxDia;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout<<diameter(a);
}