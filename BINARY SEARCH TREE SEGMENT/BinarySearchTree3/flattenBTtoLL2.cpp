// Method 1 - using vector of Node from preorder traversal
#include<iostream>
#include<stack>
#include<vector>
#include<climits>
#include<queue>
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
    void flatten(Node* root) {
        if(root==NULL) return;
        Node* l = root->left;
        Node* r = root->right;
        root->left = root->right = NULL;
        flatten(l);
        flatten(r);
        root->right = l;
        Node* temp = root;
        while(temp->right!=NULL) temp = temp->right;
        temp->right = r;
        return;
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
    Node* c = new Node(5);
    Node* d = new Node(3);
    Node* e = new Node(4);
    Node* f = new Node(6);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    Solution s;
    s.flatten(a);
    bfsTraversal(a);
}