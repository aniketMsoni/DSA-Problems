// calculate the length of the cyclic linked list
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
int cycleLength(Node* head){
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
    if(flag==false){
        cout<<"No cycle found in the list!!!"<<endl;
        return 0;
    }
    else{
        int cycleLen = 1;
        Node* temp = slow->next;
        while(temp!=slow){
            cycleLen++;
            temp = temp->next;
        }
        return cycleLen;
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
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = d;
    cout<<cycleLength(a);
    return 0;
}