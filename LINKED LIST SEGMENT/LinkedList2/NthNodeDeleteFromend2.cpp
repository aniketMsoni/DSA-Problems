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
Node* removeNthFromEnd(Node* head, int n) {
    Node* slow = head;
    Node* fast = head;
    // traverse fast to n+1 steps
    for(int i=1;i<=n+1;i++){
        if(fast==NULL) return head->next;
        fast = fast->next;
    }
    // move slow and fast at same pace
    while(fast!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    // now slow is exactly at the left of the nth
    slow->next = slow->next->next;
    return head;
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
    Node* head = a;
    display(head);
    head = removeNthFromEnd(head, 3);
    display(head);
    return 0;
}