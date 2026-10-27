#include<iostream>
using namespace std;
int countSetBits(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = n & (n-1);
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter given no : ";
    cin>>n;
    int m;
    cout<<"Enter required no : ";
    cin>>m;
    n = n ^ m;
    cout<<countSetBits(n);
    return 0;
}