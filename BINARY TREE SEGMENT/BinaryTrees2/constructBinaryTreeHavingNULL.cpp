#include<bits/stdc++.h>
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
void preorder(Node* root){
    if(root == NULL) return;
    cout<<root->val<<endl;
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    queue<Node*> q;
    Node* root = new Node(stoi(v[0]));
    q.push(root);
    int i = 1;
    int j = 2;
    while(!q.empty() && i < n){
        Node* temp = q.front();
        q.pop();
        
        if(v[i]!="N"){
            Node* t = new Node(stoi(v[i]));
            temp->left = t;
            q.push(t);
        }
        else{
            temp->left = NULL;
        }
        
        if(j<n and v[j]!="N"){
            Node* t = new Node(stoi(v[j]));
            temp->right = t;
            q.push(t);
        }
        else{
            temp->right = NULL;
        }
        i+=2;
        j+=2;
    }
    preorder(root);
}
