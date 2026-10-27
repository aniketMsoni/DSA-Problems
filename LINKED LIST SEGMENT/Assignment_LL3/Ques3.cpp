// Leetcode 328
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
Node* oddEvenList(Node* head) {
    Node* odd = new Node(100);
    Node* tempOdd = odd;
    Node* even = new Node(100);
    Node* tempEven = even;
    Node* temp = head;
    int x = 1;
    while(temp){
        if(x%2!=0){ // odd idx pe hai
            tempOdd->next = temp;
            tempOdd = tempOdd->next;
            temp = temp->next;
        }
        else{ // even list main add karna hai
            tempEven->next = temp;
            tempEven = tempEven->next;
            temp = temp->next;
        }
        x++;
    }
    tempOdd->next = even->next;
    tempEven->next = NULL;
    return odd->next;
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
    Node* d = new Node(4);
    Node* e = new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    Node* head = oddEvenList(a);
    display(head);
    return 0;
}