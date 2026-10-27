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
bool isPalindrome(Node* head) {
    Node* c = new Node(100);
    Node* temp = head;
    Node* tempC = c;
    while(temp){
        Node* node = new Node(temp->val);
        tempC->next = node;
        temp = temp->next;
        tempC = tempC->next;
    }
    c = c->next;
    c = reverseList(c);
    tempC = c;
    temp = head;
    while(tempC){
        if(tempC->val != temp->val) return false;
        tempC = tempC->next;
        temp = temp->next;
    }
    return true;
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
    Node* d = new Node(3);
    Node* e = new Node(2);
    Node* f = new Node(1);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    bool flag = isPalindrome(a);
    cout<<flag<<endl;
    return 0;
}