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
Node* cycleWhere(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool flag = false; // false means no cycle
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            flag = true;
            break;
        }
    }
    if(flag==false) return NULL;
    Node* t = head;
    while(t!=slow){
        slow = slow->next;
        t = t->next;
    }
    return slow;
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
    Node* cyclePoint = cycleWhere(a);
    if(cyclePoint==NULL) cout<<"No cycle";
    else cout<<cyclePoint->val;
    return 0;
}