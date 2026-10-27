#include<iostream>
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
class Solution{
public:
    Node* iop(Node* root){
        Node* pred = root->left;
        while(pred->right != NULL){
            pred = pred->right;
        }
        return pred;
    }
    Node* ios(Node* root){
        Node* suc = root->right;
        while(suc->left != NULL){
            suc = suc->right;
        }
        return suc;
    }
    Node* deleteNode(Node* root, int target){
        if(root->val == target){
            //Case 1 : No child nodes
            if(root->left == NULL && root->right == NULL) return NULL;
            //Case 2 : Only one child nodes
            if(root->left == NULL || root->right == NULL){
                if(root->left != NULL) return root->left;
                return root->right;
            }
            //Case 3 : Two child nodes
            if(root->left != NULL && root->right != NULL){
                Node* pred = iop(root);
                root->val = pred->val;
                root->left = deleteNode(root->left, pred->val);
            }   
        }
        else if(root->val > target){
            root->left = deleteNode(root->left, target);
        }
        else{
            root->right = deleteNode(root->right, target);
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
    Node* ans = s.deleteNode(a, 10);
    bfsTraversal(ans);
}