// Pop efficient approach
#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
public:
    // Approach 2
    stack<int> s1;
    stack<int> helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s1.size()==0){
            s1.push(x);
            return;
        }
        while(s1.size()>0){
            helper.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(helper.size()>0){
            s1.push(helper.top());
            helper.pop();
        }
    }
    
    int pop() {
        int x = s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
        return s1.top();
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