// Method using vector for implementing stack with tc O(n) and sc O(1)
#include<iostream>
#include<stack>
#include<climits>
#include<vector>
using namespace std;
class MinStack {
public:
    // Method 3
    vector<int> v;
    MinStack() {
        
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        int mn = v[0];
        for(int i=1;i<v.size();i++){
            mn = min(mn, v[i]);
        }
        return mn;
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