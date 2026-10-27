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
Node* reverseList(Node* head){
    Node *curr = head, *prev = NULL, *Next = NULL;
    while(curr){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
Node* removeNodes(Node* head) {
    // My solution
    if(head->next==NULL) return head;// Edge case

    head = reverseList(head);
    stack<Node*> st;
    st.push(head);
    Node* tail = new Node(head->val);
    Node* temp = head->next;
    Node* Next = NULL;
    while(temp){
        Next = temp->next;
        while(st.size()>0 && (st.top())->val<=temp->val) st.pop();
        if(st.size()==0){
            temp->next = tail;
            tail = temp;
        }
        st.push(temp);
        temp = Next;
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