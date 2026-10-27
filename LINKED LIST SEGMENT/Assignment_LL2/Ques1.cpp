// Leetcode 2095
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node (int val){
        this->next = NULL;
        this->val = val;
    }
};
Node* deleteMiddle(Node* head) {
    Node* slow = head;
    Node* PrevSlow = head;
    Node* fast = head;
    if(head->next==NULL) return NULL;
    while(fast!=NULL && fast->next!=NULL){
        PrevSlow = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    PrevSlow->next = PrevSlow->next->next;
    return head;
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(7);
    Node* e = new Node(1);
    Node* f = new Node(2);
    Node* g = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = NULL;
    Node* head = deleteMiddle(a);
    display(head);
    return 0;
}