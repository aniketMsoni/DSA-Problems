// Leetcode 2130
#include<iostream>
#include<climits>
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
int pairSum(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newHead = slow->next;
    slow->next = NULL;
    newHead = reverseList(newHead);
    Node* temp1 = head;
    Node* temp2 = newHead;
    int mx = INT_MIN;
    while(temp1){
        int sum = temp1->val + temp2->val;
        mx = max(mx,sum);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return mx;
}
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(5);
    Node* b = new Node(4);
    Node* c = new Node(2);
    Node* d = new Node(1);
    a->next = b;
    b->next = c;
    c->next = d;
    int result = pairSum(a);
    cout<<result;
    return 0;
}