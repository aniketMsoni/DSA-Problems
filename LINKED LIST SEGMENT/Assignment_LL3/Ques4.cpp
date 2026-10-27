// Leetcode 32
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
Node* addTwoNumbers(Node* a, Node* b) {
    int carry = 0;
    Node* tempA = a;
    Node* tempB = b;
    Node* c = new Node(200);
    Node* tempC = c;
    while(tempA && tempB){
        int sum = carry + tempA->val + tempB->val;
        if(carry + tempA->val + tempB->val > 9) carry = 1;
        else carry = 0;
        Node* t = new Node(sum%10);
        tempC->next = t;
        tempC = tempC->next;
        tempA = tempA->next;
        tempB = tempB->next;
    }
    if(tempB==NULL){
        while(tempA){
            int sum = carry + tempA->val;
            if(carry + tempA->val > 9) carry = 1;
            else carry = 0;
            Node* t = new Node(sum%10);
            tempC->next = t;
            tempA = tempA->next;
            tempC = tempC->next;
        }
        if(carry==1){
            Node* t = new Node(carry);
            tempC->next = t;
            tempC = tempC->next;
            tempC->next = NULL;
        }
    }
    else if(tempA==NULL){
        while(tempB){
            int sum = carry + tempB->val;
            if(carry + tempB->val > 9) carry = 1;
            else carry = 0;
            Node* t = new Node(sum%10);
            tempC->next = t;
            tempB = tempB->next;
            tempC = tempC->next;
        }
        if(carry==1){
            Node* t = new Node(carry);
            tempC->next = t;
            tempC = tempC->next;
            tempC->next = NULL;
        }
    }
    return c->next;
}
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(2);
    Node* b = new Node(4);
    Node* c = new Node(3);
    Node* d = new Node(5);
    Node* e = new Node(6);
    Node* f = new Node(4);
    a->next = b;
    b->next = c;
    d->next = e;
    e->next = f;
    Node* head = addTwoNumbers(a,d);
    display(head);
    return 0;
}