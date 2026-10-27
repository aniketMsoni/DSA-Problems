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
Node* partition(Node* head, int x) {
    Node* lo = new Node(100);
    Node* hi = new Node(100);
    Node* tempLo = lo;
    Node* tempHi = hi;
    Node* temp = head;
    // Partitioning the lists
    while(temp!=NULL){
        if(temp->val<x){
            tempLo->next = temp;
            temp = temp->next;
            tempLo = tempLo->next;
        }
        else{
            tempHi->next = temp;
            temp = temp->next;
            tempHi = tempHi->next;
        }
    }
    tempLo->next = hi->next; // connecting lesser elements with greater elements
    tempHi->next = NULL; // joining higher elements list with null at end
    return lo->next;
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
    Node* b = new Node(4);
    Node* c = new Node(3);
    Node* d = new Node(2);
    Node* e = new Node(5);
    Node* f = new Node(2);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    Node* head = partition(a,3);
    display(head);
    return 0;
}