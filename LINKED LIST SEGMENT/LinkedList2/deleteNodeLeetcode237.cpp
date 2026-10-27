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
void deletenode(Node* target){
    Node* temp = target;
    temp->val = temp->next->val;
    temp->next = temp->next->next;
} 
int main(){
    Node* a = new Node(4);
    Node* b = new Node(5);
    Node* c = new Node(1);
    Node* d = new Node(9);
    a->next = b;
    b->next = c;
    c->next = d;
    Node* head = a;
    display(a);
    deletenode(c);
    display(a);
}