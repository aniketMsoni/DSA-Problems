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
Node* rotateList(Node* head, int k) {
    if(head==NULL || head->next==NULL) return head;
    Node* temp = head;
    Node* tail = head;
    int size = 1;
    // size nikala and tail ko end pe rakha
    while(tail->next!=NULL){
        size++;
        tail = tail->next;
    }
    k = k % size;
    // temp ko k nodes jo rotate hoge unse pehle rakha
    for(int i=0;i<size-k-1;i++){
        temp = temp->next;
    }
    // new connection establish kiye
    tail->next = head;
    head = temp->next;
    temp->next = NULL;
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
    Node* e = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    display(head);
    head = rotateList(head, k);
    display(head);
    return 0;
}