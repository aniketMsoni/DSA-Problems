// Remove kth(1-based) element from top in a given stack
#include<iostream>
#include<stack>
using namespace std;
void removeKthelement(stack<int>& st, int k){
    stack<int> temp;
    for(int i=1;i<k;i++){
        temp.push(st.top());
        st.pop();
    }
    st.pop();
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    return;
}
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
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    display(st);
    int k;
    cout<<"Enter k : ";
    cin>>k;
    if(k>st.size() || k<=0){
        cout<<"Invalid index!";
        return 0;
    }
    removeKthelement(st,k);
    display(st);
}