#include<iostream>
using namespace std;
int countBits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = (n & (n-1));
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<countBits(n);
    return 0;
}