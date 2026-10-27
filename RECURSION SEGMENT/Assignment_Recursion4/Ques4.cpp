// Calculate factorial of any number
#include<iostream>
using namespace std;
long long  fact(long long n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    long long n;
    cout<<"Enter n : ";
    cin>>n;
    if(n<0){
        cout<<"Factorial of negative numbers doesn't exist!";
        return 0;
    }
    cout<<"The factorial of "<<n<<" is : "<<fact(n);
    return 0;
}