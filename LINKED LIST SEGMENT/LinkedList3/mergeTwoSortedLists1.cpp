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
    Node* tempA = a;
    Node* tempB = b;
    Node* c = new Node(100);
    Node* tempC = c;
    while(tempA!=NULL && tempB!=NULL){
        if(tempA->val<=tempB->val){
            Node* t = new Node(tempA->val);
            tempC->next = t;
            tempC = t;
            tempA = tempA->next;
        }
        else{
            Node* t = new Node(tempB->val);
            tempC->next = t;
            tempC = t;
            tempB = tempB->next;
        }
    }
    if(tempA==NULL) tempC->next = tempB; 
    else tempC->next = tempA;
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