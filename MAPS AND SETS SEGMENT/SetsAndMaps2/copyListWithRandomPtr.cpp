#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* random;
    Node (int val){
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};
class Solution {
public:
    Node* copyRandomList(Node* head) {
        // making deep copy
        Node* dummy = new Node(-100);
        Node* tempC = dummy;
        Node* temp = head;
        while(temp!=NULL){
            Node* t = new Node(temp->val);
            tempC->next = t;
            tempC = tempC->next;
            temp = temp->next;
        }
        Node* b = dummy->next;
        // marking values in map
        Node* a = head;
        unordered_map<Node*,Node*> m;
        while(a!=NULL){
            m[a] = b;
            a = a->next;
            b = b->next;
        }
        // marking randoms
        for(auto x : m){
            Node* z = (x.first)->random;
            if(z!=NULL) (x.second)->random = m[z];
        }
        return dummy->next;
    }
};
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(7);
    Node* b = new Node(13);
    Node* c = new Node(11);
    Node* d = new Node(10);
    Node* e = new Node(1);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    a->random = NULL;
    b->random = a;
    c->random = e;
    d->random = c;
    e->random = a;
    Solution s;;
    Node* copyHead = s.copyRandomList(a);
    display(copyHead);
    return 0;
}