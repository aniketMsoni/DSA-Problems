#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* random;
    Node (int val){
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int idxReturner(Node* head, int value){

}
Node* copyList(Node* head){
    Node* c = new Node(100);
    Node* tempC = c;
    Node* temp = head;
    while(temp){
        Node* t = new Node(temp->val);
        tempC->next = t;
        tempC = tempC->next;
        temp = temp->next;
    }
    c = c->next;
    tempC = c;
    temp = head;
    while(tempC){
        int idx = idxReturner(head, tempC->val);
    }
}
int main(){
    Node* a = new Node(7);
    Node* b = new Node(13);
    Node* c = new Node(11);
    Node* d = new Node(10);
    Node* e = new Node(1);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    a->random = NULL;
    b->random = a;
    c->random = e;
    d->random = c;
    e->random = a;
    Node* copyHead = copyList(a);
    return 0;
}