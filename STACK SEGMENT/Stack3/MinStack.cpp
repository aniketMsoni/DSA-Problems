// Ultimate method with tc and sc O(1)
#include<iostream>
#include<stack>
#include<climits>
using namespace std;
class MinStack {
public:
    // Method IV
    stack<long long> st;
    long long min;
    MinStack() {
        min = LLONG_MAX;
    }
    
    void push(int val) {
        long long x = (long long)val;
        if(st.size()==0){
            min = x;
            st.push(x);
        }
        else if(min<=x) st.push(x);
        else{ // val < min
            st.push(2*x - min);
            min = x;
        }
    }
    
    void pop() {
        if(st.top()<min){ // A fake value is present
        // before popping make sure to retrieve the old min
            long long oldMin = 2*min - st.top();
            min = oldMin;
        }
        st.pop();
    }
    
    int top() {
        if(st.top()<min) return (int)min;
        else return (int)st.top();
    }
    
    int getMin() {
        return (int)min;
    }
};

int main(){
    MinStack ms;
    ms.push(-2);
    ms.push(0);
    ms.push(-3);
    cout<<ms.getMin()<<endl;
    ms.pop();
    cout<<ms.top()<<endl;
    cout<<ms.getMin()<<endl;
    return 0;
}