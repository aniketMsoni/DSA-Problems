#include<iostream>
#include<vector>
using namespace std;
class Stack{ // user defined data structure
public:
    vector<int> v; // No overflow condition
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        v.pop_back();
    }
    int top(){
        if(v.size()==0){
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int stackSize(){
        return v.size();
    }
    void display(){
        for(int ele : v) cout<<ele<<" ";
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
    cout<<st.stackSize()<<endl;
    st.pop();
    st.push(70);
    st.push(80);
    st.push(90);
    cout<<st.top()<<endl;
    st.push(100);
    st.display();
    return 0;
}