// Calculating the sum of odd numbers between a and b (both inclusive) using recursion.
#include<iostream>
using namespace std;
int sumOdd(int a, int b){
    if(a>b) return 0;
    if(a%2!=0){
        return a + sumOdd(a+2,b);
    }
    else return sumOdd(a+1,b); // a is an even no
}
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    int res = sumOdd(min(a,b),max(a,b));
    cout<<res;
}