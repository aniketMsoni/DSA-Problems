// Leetcode 1721
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
Node* swapNodes(Node* head, int k) {
    Node* tempA = head; // kth node from beginning
    Node* slow = head;
    Node* fast = head;
    for(int i=1;i<k;i++){
        tempA = tempA->next;
    }
    for(int i=1;i<=k;i++){
        fast = fast->next;
    }
    while(fast!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    swap(slow->val, tempA->val);
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
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = swapNodes(a,2);
    display(head);
    return 0;
}