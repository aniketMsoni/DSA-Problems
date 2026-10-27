// Implement a ll class and it should have insert(head,tail,idx), delete(head,tail,idx), get(idx) and display functions...
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
class LinkedList{
public:
    Node* head;
    int size;
    LinkedList (){
        head = NULL;
        size = 0;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = temp;
        }
        else{
            Node* t = head;
            while(t->next!=NULL){
                t = t->next;
            }
            t->next = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || size<idx) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* temp = new Node(val);
            Node* t = head;
            for(int i=1;i<=idx-1;i++){
                t = t->next;
            }
            temp->next = t->next;
            t->next = temp;
        }
    }
    int getIdx(int idx){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return -1;
        }
        Node* temp = head;
        for(int i=1;i<=idx;i++){
            temp = temp->next;
        }
        return temp->val;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return;
        }
        else{
            head = head->next;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return;
        }
        else if(size==1){
            head = NULL;
            size--;
        }
        else{
            Node* temp = head;
            while(temp->next->next!=NULL){
                temp = temp->next;
            }
            temp->next = NULL;
            size--;
        }
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index!"<<endl;
            return;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};
int main(){
    LinkedList ll;
    ll.insertAtHead(30);
    ll.insertAtHead(20);
    ll.insertAtHead(10);
    ll.display();
    ll.insertAtTail(40);
    ll.display();
    ll.insertAtIdx(2, 25);
    ll.display();
    //cout<<ll.getIdx(4);
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
}