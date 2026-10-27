// Leetcode 2095
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
Node* mergeInBetween(Node* list1, int a, int b, Node* list2) {
    Node* tempA = list1;
    Node* tempB = list1;
    Node* t = list1;
    int x = 0;
    while(t!=NULL){
        if(x==a-1){
            tempA = t;
        }
        else if(x==b){
            tempB = t;
            break;
        }
        x++;
        t = t->next;
    }
    tempA->next = list2;
    t = list2;
    while(t->next!=NULL) t = t->next;
    t->next = tempB->next;
    return list1;
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
    Node* a = new Node(0);
    Node* b = new Node(1);
    Node* c = new Node(2);
    Node* d = new Node(3);
    Node* e = new Node(4);
    Node* f = new Node(5);

    Node* m = new Node(1000000);
    Node* n = new Node(1000001);
    Node* o = new Node(1000002);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    m->next = n;
    n->next = o;
    Node* head = mergeInBetween(a,3,4,m);
    display(head);
    return 0;
}