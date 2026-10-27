#include<iostream>
#include<stack>
using namespace std; 
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
void pushAtBottom(stack<int>& st, int val, int index){
    stack<int> temp;
    while(st.size()>index){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    return;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    int val;
    cout<<"Enter val : ";
    cin>>val;
    int idx;
    cout<<"Enter index : ";
    cin>>idx;
    pushAtBottom(st, val, idx);
    display(st);
}