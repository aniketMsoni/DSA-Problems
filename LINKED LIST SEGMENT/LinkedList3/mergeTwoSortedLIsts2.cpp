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
Node* mergeTwoLists(Node* a, Node* b) {
    // SC = O(1)
    Node* c = new Node(100);
    Node* t = c;
    while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            t->next = a;
            a = a->next;
            t = t->next;
        }
        else{
            t->next = b;
            b = b->next;
            t = t->next;
        }
    }
    if(a==NULL) t->next = b; 
    else t->next = a;
    return c->next;
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
    Node* b = new Node(2);
    Node* c = new Node(5);
    Node* d = new Node(2);
    Node* e = new Node(3);
    Node* f = new Node(4);
    Node* g = new Node(6);
    a->next = b;
    b->next = c;
    d->next = e;
    e->next = f;
    f->next = g;
    Node* head1 = a;
    Node* head2 = d;
    Node* head = mergeTwoLists(head1, head2);
    display(head);
    return 0;
}