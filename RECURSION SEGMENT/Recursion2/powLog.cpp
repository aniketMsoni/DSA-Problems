#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n==1) return x;
    int ans = pow(x,n/2);
    if(n%2==0) return ans*ans;
    else return ans*ans*x;
}
int main(){
    int base;
    cout<<"Enter base : ";
    cin>>base;
    int exponent;
    cout<<"Enter exponent : ";
    cin>>exponent;
    cout<<pow(base,exponent);
    return 0;
}