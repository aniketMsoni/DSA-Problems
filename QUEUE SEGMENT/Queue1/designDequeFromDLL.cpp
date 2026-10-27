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
class Deque{
public:
    Node* head;
    Node* tail;
    int size;
    Deque (){
        head = tail = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        size++;
    }
    void pushFront(int val){
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
    void pop(){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return;
        }
        head = head->next;
        if(head!=NULL) head->prev = NULL; // extra
        if(head==NULL) tail = NULL; // extra
        size--;
    }
    void popBack(){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return;
        }
        else if(size==1){
            pop();
            return;
        }
        Node* temp = tail->prev; // extra
        temp->next = NULL; // extra
        tail = temp; // extra
        size--;
    }
    int front(){
        if(size==0){
            cout<<"Deque is empty!"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Deque is empty!"<<endl;
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    bool isEmpty(){
        if(size==0) return true;
        return false;
    }
};
int main(){
    Deque dq;
    dq.push(10);
    dq.push(20);
    dq.push(30);
    dq.display();
    dq.pushFront(5);
    dq.display();
    dq.popBack();
    dq.display();
    dq.pop();
    dq.display();
}