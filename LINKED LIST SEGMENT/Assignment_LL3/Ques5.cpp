// Leetcode 1290
#include<iostream>
#include<cmath>
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
Node* reverseList(Node* head){
    Node *curr = head, *prev = NULL, *Next = NULL;
    while(curr){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
int getDecimalValue(Node* head) {
    head = reverseList(head);
    int x = 0;
    Node* temp = head;
    int result = 0;
    while(temp){
        result += (pow(2,x++) * temp->val);
        temp = temp->next;
    }
    return result;
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
    Node* b = new Node(0);
    Node* c = new Node(1);
    a->next = b;
    b->next = c;
    int result = getDecimalValue(a);
    cout<<result;
    return 0;
}