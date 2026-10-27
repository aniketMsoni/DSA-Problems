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
Node* reverseList(Node* head) {
    // Method 2
    Node *curr = head, *prev = NULL, *Next = NULL;
    while(curr){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
void reorderList(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newHead = reverseList(slow->next);
    slow->next = NULL;
    Node* c = new Node(100);
    Node* tempC = c;
    slow = head;
    fast = newHead;
    while(slow!=NULL && fast!=NULL){
        tempC->next = slow;
        slow = slow->next;
        tempC = tempC->next;

        tempC->next = fast;
        fast = fast->next;
        tempC = tempC->next;
    }
    if(slow!=NULL) tempC->next = slow;
    c->next = head;
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
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    reorderList(a);
    display(a);
    return 0;
}