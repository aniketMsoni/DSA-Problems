#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node (int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DLL{
public:
    Node* head;
    Node* tail;
    int size;
    DLL (){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head->prev = temp; // extra
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtHead(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp; // extra
            t->next->prev = t; // extra
        }
        size++;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return;
        }
        head = head->next;
        if(head!=NULL) head->prev = NULL; // extra
        if(head==NULL) tail = NULL; // extra
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return;
        }
        else if(size==1){
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev; // extra
        temp->next = NULL; // extra
        tail = temp; // extra
        size--;
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
            temp->next->prev = temp; // extra
            size--;
            return;
        }
    }
    int getElementIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){
                Node* temp = head;
                for(int i=1;i<=idx;i++){
                    temp = temp->next;
                }
                return temp->val;
            }
            else{
                Node* temp = tail;
                for(int i=1;i<size-idx;i++){
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    DLL ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.display();
    ll.insertAtTail(40);
    ll.display();
    ll.insertAtHead(50);
    ll.display();
    ll.insertAtIdx(2,75);
    // ll.display();
    ll.deleteAtTail();
    // ll.display();
    ll.deleteAtHead();
    // ll.display();
    ll.insertAtTail(60);
    // ll.display();
    ll.deleteAtIdx(3);
    ll.display();
    ll.insertAtTail(70);
    ll.insertAtTail(80);
    //cout<<ll.getElementIdx(1);
}