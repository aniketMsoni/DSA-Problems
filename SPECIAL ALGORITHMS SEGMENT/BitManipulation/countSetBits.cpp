#include<iostream>
using namespace std;
int countSetBits(int n){
    return __builtin_popcount(n);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<countSetBits(n);
    return 0;
}