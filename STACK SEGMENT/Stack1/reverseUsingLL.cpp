#include<iostream>
#include<stack>
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
void display(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    Node* dummy = new Node(100);
    Node* tempC = dummy;
    while(st.size()>0){
        Node* t = new Node(st.top());
        st.pop();
        tempC->next = t;
        tempC = tempC->next;
    }
    tempC = dummy->next;
    while(tempC){
        st.push(tempC->val);
        tempC = tempC->next;
    }
    display(st);
}