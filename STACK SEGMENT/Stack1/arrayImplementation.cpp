#include<iostream>
using namespace std;
class Stack{ // user defined data structure
public:
    int arr[5];
    int idx;
    int arrsize;
    Stack (){ 
        idx = -1;
        arrsize = sizeof(arr)/sizeof(arr[0]);
    }
    void push(int val){
        if(idx==arrsize-1){
            cout<<"Stack is Full!"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int stackSize(){
        return idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
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