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
Node* detectCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool flag = false; // no cycle
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            flag = true;
            break;
        }
    }
    if(flag==false) return NULL;
    else{
        Node* temp = head;
        while(temp!=slow){
            slow = slow->next;
            temp = temp->next;
        }
        return slow;
    }
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
    e->next = a;
    Node* result = detectCycle(a);
    cout<<result->val;
    cout<<"and";
    return 0;
}