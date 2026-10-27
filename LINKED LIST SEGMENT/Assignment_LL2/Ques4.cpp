// Leetcode 203
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
Node* removeElements(Node* head, int val) {
    if(head==NULL) return NULL;
    while(head!=NULL && head->val==val){
        head = head->next;
    }
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->next->val==val){
            temp->next = temp->next->next;
        }
        else{
            temp = temp->next;
        }
    }
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
    Node* b = new Node(2);
    Node* c = new Node(6);
    Node* d = new Node(3);
    Node* e = new Node(4);
    Node* f = new Node(5);
    Node* g = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    Node* head = removeElements(a,6);
    display(head);
    return 0;
}