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
Node* getNodeIdx(Node* head, int idx){
    Node* temp = head;
    for(int i=1;i<=idx;i++){
        temp = temp->next;
    }
    return temp;
}
Node* reverseList(Node* head) {
    // Method 1
    int n = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    temp = head;
    int i = 0;
    int j = n-1;
    while(i<j){
        Node* a = getNodeIdx(head, i);
        Node* b = getNodeIdx(head, j);
        int t = a->val;
        a->val = b->val;
        b->val = t;
        i++;
        j--;
    }
    return head;
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
    Node* head = reverseList(a);
    display(head);
    return 0;
}