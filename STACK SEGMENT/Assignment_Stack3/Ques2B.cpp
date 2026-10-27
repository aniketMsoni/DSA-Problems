#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
Node* removeNodes(Node* head) {
    stack<Node*> st;
    while(head){
        st.push(head);
        head = head->next;
    }
    Node* tail = st.top();
    st.pop();
    int mx = tail->val;
    while(st.size()){
        Node* top = st.top();
        st.pop();
        if(top->val>=mx){
            top->next = tail;
            tail = top;
            mx = top->val;
        }
    }
    return tail;
}
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(5);
    Node* b = new Node(2);
    Node* c = new Node(13);
    Node* d = new Node(3);
    Node* e = new Node(8);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    Node* head = removeNodes(a);
    display(head);
    return 0;
}