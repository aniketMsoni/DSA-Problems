// what given function do
// Result -- prints binary representation of n
#include<iostream>
#include<stack>
using namespace std;
void fun(int n){
    stack<int> temp;
    while(n>0){
        temp.push(n%2);
        n = n/2;
    }
    while(temp.size()>0){
        cout<<temp.top();
        temp.pop();
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    fun(n);
}