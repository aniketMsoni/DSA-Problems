#include<iostream>
#include<queue>
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
    Node* insertIntoBST(Node* root, int val) {
        if(root==NULL){
            Node* root = new Node(val);
            return root;
        }
        if(root->val>val){
            if(root->left==NULL){
                root->left = new Node(val);
                return root;
            }
            insertIntoBST(root->left, val);
        }
        else{
            if(root->right==NULL){
                root->right = new Node(val);
                return root;
            }
            insertIntoBST(root->right, val);
        }
        return root;
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
    Node* temp = s.insertIntoBST(a, 11);
    bfsTraversal(temp);
}