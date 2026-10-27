#include<iostream>
using namespace std;
int fact(int n){
    // Base case
    if(n==1 || n==0) return 1;
    // kaam and Recursive call 
    int ans = n*fact(n-1);
    // return
    return ans;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n<0) return 0;
    int res = fact(n);
    cout<<res<<" ";
    return 0;
}