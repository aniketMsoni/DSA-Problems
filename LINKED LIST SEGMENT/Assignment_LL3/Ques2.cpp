// Leetcode 147
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
Node* insertionSortList(Node* head) {
    Node* dummy = new Node(100);
    Node* temp = dummy;
    Node *Next = NULL, *curr = head;
    while(curr){
        temp = dummy;
        Next = curr->next;
        while(temp->next && temp->next->val<curr->val) temp = temp->next;
        curr->next = temp->next;
        temp->next = curr;
        curr = Next;
    }
    return dummy->next;
}
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(4);
    Node* b = new Node(2);
    Node* c = new Node(1);
    Node* d = new Node(3);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    Node* head = insertionSortList(a);
    display(head);
    return 0;
}