#include<iostream>
#include<queue>
#include<climits>
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
    vector<int> inorderTraversal(Node* root) {
        vector<int> ans;
        Node* curr = root;
        while(curr!=NULL){
            if(curr->left != NULL){ // find the pred
                Node* pred = curr->left;
                while(pred->right != NULL && pred->right != curr){
                    pred = pred->right;
                }
                if(pred->right == NULL){ // Link
                    pred->right = curr;
                    curr = curr->left;
                }
                else{ // pred->right == curr : Unlink
                    pred->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            else{ // curr->left == NULL
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        return ans;
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
    Node* c = new Node(20);
    Node* d = new Node(2);
    Node* e = new Node(8);
    Node* f = new Node(15);
    Node* g = new Node(25);
    Node* h = new Node(4);
    Node* j = new Node(12);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    d->right = h;
    c->left = f;
    c->right = g;
    f->left = j;
    Solution s;
    vector<int> ans = s.inorderTraversal(a);
    for(int ele: ans) cout<<ele<<" ";
}