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
    long long maxTree(Node* root){
        if(root==NULL) return LLONG_MIN;
        long long leftMax = maxTree(root->left);
        long long rightMax = maxTree(root->right);
        return max((long long)root->val, max(leftMax, rightMax));
    }
    long long minTree(Node* root){
        if(root==NULL) return LLONG_MAX;
        long long leftMin = minTree(root->left);
        long long rightMin = minTree(root->right);
        return min((long long)root->val, min(leftMin, rightMin));
    }
    bool isValidBST(Node* root) {
        if(root==NULL) return true;
        long long lstMax = maxTree(root->left);
        long long rstMin = minTree(root->right);
        if((long long)root->val <= lstMax) return false;
        else if((long long)root->val >= rstMin) return false;
        return isValidBST(root->left) && isValidBST(root->right);
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