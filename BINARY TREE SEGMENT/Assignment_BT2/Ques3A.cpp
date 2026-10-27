// Level Order Traversal -- Right to Left -- BFS approach
#include<iostream>
#include<queue>
#include<vector>
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
vector<vector<int>> bfsTraversal(Node* root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        int n = q.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            Node* temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->right != NULL) q.push(temp->right);
            if(temp->left != NULL) q.push(temp->left);
        }
        ans.push_back(v);
    }
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
    vector<vector<int>> ans = bfsTraversal(a);
    for(const auto& row : ans){
        for(const auto& col : row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}