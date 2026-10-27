#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a,a);
}
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    cout<<gcd(a,b);
}