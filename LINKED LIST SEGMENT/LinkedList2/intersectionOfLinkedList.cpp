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
Node *getIntersectionNode(Node *headA, Node *headB) {
    int len1 = 0; // list1 length
    int len2 = 0; // list2 length
    Node* temp1 = headA;
    Node* temp2 = headB;
    while(temp1!=NULL){
        len1++;
        temp1 = temp1->next;
    }
    while(temp2!=NULL){
        len2++;
        temp2 = temp2->next;
    }
    temp1 = headA;
    temp2 = headB;
    if(len1>len2){ // list1 is longer than list2
        for(int i=1;i<=(len1-len2);i++){
            temp1 = temp1->next;
        }
        while(temp1!=temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
    else{
        for(int i=1;i<=(len2-len1);i++){
            temp2 = temp2->next;
        }
        while(temp1!=temp2){ 
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp2;
    }
    return NULL;
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
    Node* x = new Node(1);
    Node* y = new Node(3);
    Node* z = new Node(4);
    Node* A = new Node(5);
    Node* B = new Node(6);
    Node* C = new Node(7);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = A;
    A->next = B;
    B->next = C;
    x->next = y;
    y->next = z;
    z->next = A;
    Node* head1 = a;
    Node* head2 = x;
    head1 = getIntersectionNode(head1, head2);
    cout<<head1->val;
    return 0;
}