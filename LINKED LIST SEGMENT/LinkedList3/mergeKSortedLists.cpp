#include<iostream>
#include<vector>
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
Node* merge(Node* a, Node* b) {
    Node* tempA = a;
    Node* tempB = b;
    Node* c = new Node(100);
    Node* tempC = c;
    while(tempA!=NULL && tempB!=NULL){
        if(tempA->val<=tempB->val){
            Node* t = new Node(tempA->val);
            tempC->next = t;
            tempC = t;
            tempA = tempA->next;
        }
        else{
                Node* t = new Node(tempB->val);
            tempC->next = t;
            tempC = t;
            tempB = tempB->next;
        }
    }
    if(tempA==NULL) tempC->next = tempB; 
    else tempC->next = tempA;
    return c->next;
}

Node* mergeKLists(vector<Node*>& arr) {
    if(arr.size()==0) return NULL;
    while(arr.size()>1){
        Node* a = arr[arr.size()-1];
        arr.pop_back();
        Node* b = arr[arr.size()-1];
        arr.pop_back();
        a = merge(a,b);
        arr.push_back(a);
    }
    return arr[0];
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
    Node* b = new Node(4);
    Node* c = new Node(5);
    Node* d = new Node(1);
    Node* e = new Node(3);
    Node* f = new Node(4);
    Node* g = new Node(2);
    Node* h = new Node(6);
    a->next = b;
    b->next = c;
    d->next = e;
    e->next = f;
    g->next = h;
    vector<Node*> nodes = {a,d,g};
    Node* head = mergeKLists(nodes);
    display(head);
    return 0;
}