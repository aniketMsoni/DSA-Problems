#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> a){
    stack<int> temp;
    while(a.size()>0){
        temp.push(a.top());
        a.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        a.push(temp.top());
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
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    stack<int> temp2;
    while(temp.size()>0){
        temp2.push(temp.top());
        temp.pop();
    }
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    display(st);
}