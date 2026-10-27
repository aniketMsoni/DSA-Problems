#include<iostream>
using namespace std;
class Solution{
public:
    int fib(int n){
        if(n <= 1) return n;
        return fib(n-1) + fib(n-2);
    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    cout<<s.fib(n);
    return 0;
}