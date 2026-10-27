// Push efficient approach
#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
public:
    stack<int> s1;
    stack<int> helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.size()==0) return -1;
        while(s1.size()>1){
            helper.push(s1.top());
            s1.pop();
        }
        int x = s1.top();
        s1.pop();
        while(helper.size()>0){
            s1.push(helper.top());
            helper.pop();
        }
        return x;
    }
    
    int peek() {
        if(s1.size()==0) return -1;
        while(s1.size()>1){
            helper.push(s1.top());
            s1.pop();
        }
        int x = s1.top();
        while(helper.size()>0){
            s1.push(helper.top());
            helper.pop();
        }
        return x;
    }
    
    bool empty() {
        if(s1.size()==0) return true;
        return false;
    }
};

int main(){
    MyQueue m;
    m.push(1);
    m.push(2);
    cout<<m.peek()<<endl;
    cout<<m.pop()<<endl;
    cout<<m.empty()<<endl;
    return 0;
}