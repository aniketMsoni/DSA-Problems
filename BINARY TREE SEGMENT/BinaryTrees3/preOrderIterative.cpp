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
vector<int> preOrder(Node* root){
    vector<int> v;
    stack<Node*> st;
    if(root) st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        v.push_back(temp->val);
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
    return v;
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
    vector<int> v = preOrder(a);
    for(const auto& ele : v) cout<<ele<<" ";
    return 0;
}