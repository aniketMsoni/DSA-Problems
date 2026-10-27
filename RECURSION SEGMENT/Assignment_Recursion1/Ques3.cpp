// Given a positive integer, return true if it is a power of 2.
#include<iostream>
using namespace std;
bool flag(int n){
    // Base case
    if(n==1){
        return true;
    }
    if(n%2==0){
        flag(n/2);
    }
    else return false;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n==1){
        cout<<"False";
        return 0;
    }
    if(flag(n)) cout<<"True";
    else cout<<"false";
}