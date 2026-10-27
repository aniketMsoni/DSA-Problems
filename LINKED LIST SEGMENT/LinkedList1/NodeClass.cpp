#include<iostream>
using namespace std;
class Node{ // Linked List Node
public:
    int val;
    Node* next;
    Node (int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming ll
    d.val = 40;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    a.next->val = 70;
    cout<<b.val<<endl;
    cout<<((a.next)->next)->val<<endl; // C ki val print kar rhe hai
    cout<<(*((*((*(a.next)).next)).next)).val<<endl;
    cout<<((a.next->next)->next)->val<<endl;
}