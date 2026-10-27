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
class Stack{
public:
    Node* head;
    int size;
    Stack (){
        head = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        return head->val;
    }
    void print(Node* head){
        if(head==NULL) return;
        print(head->next);
        cout<<head->val<<" ";
    }
    void display(){
        if(head==NULL){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        Node* temp = head;
        print(head);
        cout<<endl;
    }
};
int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    cout<<st.size<<endl;
    st.pop();
    st.push(70);
    st.push(80);
    st.push(90);
    cout<<st.top()<<endl;
    st.push(100);
    st.display();
    return 0;
}