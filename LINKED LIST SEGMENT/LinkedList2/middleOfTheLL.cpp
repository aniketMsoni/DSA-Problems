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
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* getNodeIdx(int idx, Node* head){
    Node* temp = head;
    for(int i=1;i<=idx;i++){
        temp = temp->next;
    }
    return temp;
}
Node* middleNode(Node* head){
    int size = 0;
    Node* temp = head;
    while(temp!=NULL){
        size++;
        temp = temp->next;
    }
    return getNodeIdx(size/2, head);
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    Node* result = middleNode(a);
    cout<<result->val<<endl;
}