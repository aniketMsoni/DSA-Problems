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
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    // slow is at the left middle or middle of the list
    Node* newHead = reverseList(slow->next);
    slow = head;
    fast = newHead;
    while(fast){
        if(slow->val != fast->val) return false;
        slow = slow->next;
        fast = fast->next;
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