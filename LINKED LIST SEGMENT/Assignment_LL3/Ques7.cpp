// Leetcode 25
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
Node* reverse(Node* head){
        Node *curr = head, *Next = NULL, *prev = NULL;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
Node* reverseKGroup(Node* head, int k) {
    if(head->next==NULL) return head;
    Node* dummy = new Node(100);
    Node* tempC = dummy;
    Node *curr = head, *Next = head;
    while(Next){
        Node* temp = curr;
        for(int i=1;i<k;i++){
            if(temp==NULL) break;
            temp = temp->next;
        }
        if(temp==NULL){
            tempC->next = curr;
            break;
        }
        Next = temp->next;
        temp->next = NULL;
        Node* newHead = reverse(curr);
        tempC->next = newHead;
        while(tempC->next) tempC = tempC->next;
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
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* result = reverseKGroup(a,2);
    display(result);
}