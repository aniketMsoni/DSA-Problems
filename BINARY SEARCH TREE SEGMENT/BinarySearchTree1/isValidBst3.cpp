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
    Node* prev = NULL;
    bool flag = true;
    void inorder(Node* root){
        if(root==NULL) return;
        inorder(root->left);
        if(prev!=NULL){
            if(root->val <= prev->val){
                flag = false;
                return;
            }
        }
        prev = root;
        inorder(root->right);
    }
    bool isValidBST(Node* root) {
        inorder(root);
        return flag;
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
    cout<<s.isValidBST(a);
}