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
Node* sortList(Node* head) {
    if(head==NULL || head->next==NULL) return head;
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* a = head;
    Node* b = slow->next;
    slow->next = NULL;
    a = sortList(a);
    b = sortList(b);
    Node* c = mergeTwoLists(a,b);
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
    Node* a = new Node(4);
    Node* b = new Node(1);
    Node* c = new Node(2);
    Node* d = new Node(3);
    a->next = b;
    b->next = c;
    c->next = d;
    Node* head = sortList(a);
    display(head);
    return 0;
}