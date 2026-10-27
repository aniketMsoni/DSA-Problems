#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> a){
    while(a.size()>0){
        cout<<a.top()<<" ";
        a.pop();
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
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    display(temp);
}