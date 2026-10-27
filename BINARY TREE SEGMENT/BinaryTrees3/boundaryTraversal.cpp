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
void leftBoundary(Node* root, vector<int>& ans){
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    ans.push_back(root->val);
    if(root->left == NULL && root->right != NULL) leftBoundary(root->right, ans);
    else leftBoundary(root->left, ans);
}
void leafNodes(Node* root, vector<int>& ans){
    if(root==NULL ) return;
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->val);
        return;
    }
    leafNodes(root->left, ans);
    leafNodes(root->right, ans);
}
void rightBoundary(Node* root, vector<int>& ans){
    if(root==NULL) return;
    if(root->left == NULL && root->right == NULL) return;
    if(root->right == NULL && root->left != NULL) rightBoundary(root->left, ans);
    else rightBoundary(root->right, ans);
    ans.push_back(root->val);
}
vector<int> boundaryTraversal(Node* root){
    vector<int> ans;
    if(root==NULL) return ans;
    ans.push_back(root->val);
    if(root->left==NULL && root->right==NULL) return ans;
    leftBoundary(root->left, ans);
    leafNodes(root, ans);
    rightBoundary(root->right, ans);
    return ans;
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
    vector<int> v = boundaryTraversal(a);
    for(const auto& ele : v) cout<<ele<<" ";
    return 0;
}