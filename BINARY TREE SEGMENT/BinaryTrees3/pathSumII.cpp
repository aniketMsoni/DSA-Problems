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
    void helper(Node* root, vector<int> v, vector<vector<int>>& ans, int sum){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(root->val==sum){
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        helper(root->left, v, ans, sum-(root->val));
        helper(root->right, v, ans, sum-(root->val));
    }
    vector<vector<int>> pathSum(Node* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        helper(root, v, ans, targetSum);
        return ans;
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
    vector<vector<int>> v = s.pathSum(a,n);
    for(const auto& ele : v){
        for(const auto& d : ele) cout<<d<<" ";
        cout<<endl;
    }
    return 0;
}