#include<iostream>
using namespace std;
int sum1(int n){
    // if(n==0) return 0;
    // int res = n;
    // res += sum1(n-1);
    // return res;
    if(n==0) return 0; // for edge case, it's mathematically correct and a better base case
    return n + sum1(n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int res = sum1(n);
    cout<<res<<endl;
    return 0;
}