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
Node* reverse(Node* head) {
    Node *curr = head, *prev = NULL, *Next = NULL;
    while(curr){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
Node* reverseBetween(Node* head, int left, int right) {
    if(left==right) return head;
    Node *a = NULL, *b = NULL, *c = NULL, *d = NULL;
    Node* temp = head;
    int n = 1;
    while(temp){
        if(n==left-1) a = temp;
        if(n==left) b = temp;
        if(n==right) c = temp;
        if(n==right+1) d = temp;
        temp = temp->next;
        n++;
    }
    if(a) a->next = NULL;
    c->next = NULL;
    c = reverse(b);
    if(a) a->next = c;
    b->next = d;
    if(a!=NULL) return head;
    return c;
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
    Node* head = reverseBetween(a,2,4);
    display(head);
    return 0;
}