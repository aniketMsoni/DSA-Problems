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
    Node* bstFromPreorder(vector<int>& pre) {
        Node* root = new Node(pre[0]);
        for(int i=1;i<pre.size();i++){
            insertIntoBST(root, pre[i]);
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
    vector<int> v = {8,5,1,7,10,12};    
    Solution s;
    Node* temp = s.bstFromPreorder(v);
    bfsTraversal(temp);
}