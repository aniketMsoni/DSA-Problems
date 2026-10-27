#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node (int val){
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
Node* reverseNNodes(Node* head){
    Node* temp = head;
    Node* curr = head;
    Node* prev = NULL;
    Node* Next = NULL;
    int x = 1;
    while(curr){
        for(int i=1;i<x++;i++){
            temp = temp->next;
        }
        Next = temp->next;
        temp->next = NULL;
        Node* newHead = reverseList(curr);
        if(prev) prev->next = newHead;
        curr->next = Next;
        prev = curr;
        curr = temp = Next;
    }
    return head;
}
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    Node* i = new Node(9);
    Node* j = new Node(10);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    i->next = j;
    display(a);
    Node* head = reverseNNodes(a);
    display(a);
    return 0;
}