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
    void inorder(Node* root, vector<int>& v){
        if(root==NULL) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    bool isValidBST(Node* root) {
        vector<int> v;
        inorder(root, v);
        for(int i=0;i<v.size()-1;i++) if(v[i]>=v[i+1]) return false;
        return true;
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