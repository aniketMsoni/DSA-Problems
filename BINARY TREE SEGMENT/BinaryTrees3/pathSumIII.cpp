#include<iostream>
#include<vector>
#include<stack>
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
    void helper(Node* root, long long sum, int& count){
        if(root==NULL) return;
        if((long long)(root->val)==sum) count++;
        helper(root->left, sum-(long long)(root->val), count);
        helper(root->right, sum-(long long)(root->val), count);
    }
    int pathSum(Node* root, int targetSum) {
        if(root==NULL) return 0;
        int count = 0;
        helper(root, (long long)targetSum, count);
        count += (pathSum(root->left, targetSum) + pathSum(root->right, targetSum));
        return count;
    }
};
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
    Solution s;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ans = s.pathSum(a,n);
    cout<<ans;
    return 0;
}