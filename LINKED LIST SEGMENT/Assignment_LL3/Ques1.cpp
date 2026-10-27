// Leetcode 82
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
Node* deleteDuplicates(Node* head) {
    if(head==NULL || head->next==NULL) return head;
    Node* a = head;
    Node* b = head->next;
    Node* c = new Node(100);
    bool flag = false;  // curr node ka value ka duplicate nhi hai
    Node* tempC = c;
    while(a!=NULL){
        flag = false;
        while(b!=NULL && b->val==a->val){
            flag = true;
            b = b->next;
        }
        if(flag==false){
            Node* t = new Node(a->val);
            tempC->next = t;
            tempC = tempC->next;
        }
        a = b;
        if(b!=NULL) b = b->next;
    }
    return c->next;
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
    Node* d = new Node(3);
    Node* e = new Node(4);
    Node* f = new Node(4);
    Node* g = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    display(a);
    Node* head = deleteDuplicates(a);
    display(head);
    return 0;
}