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
    // size calculation
    if(head==NULL || head->next==NULL) return head;
    int n = 0;
    Node* temp = head;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    // splitting the linked list into two separate linked lists
    int goal = n/2 - 1;
    temp = head;
    Node* head2 = NULL;
    if(n%2==0){ // even size hai yani goal steps ke baad next head hoga
        for(int i=0;i<goal;i++){
            temp = temp->next;
        }
        head2 = temp->next;
        temp->next = NULL;
    }
    else{
        for(int i=0;i<goal;i++){
            temp = temp->next;
        }
        head2 = temp->next->next;
        temp->next = NULL;
    }
    head2 = reverseList(head2);
    temp = head;
    Node* temp2 = head2;
    while(temp){
        if(temp->val!=temp2->val) return false;
        temp = temp->next;
        temp2 = temp2->next;
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