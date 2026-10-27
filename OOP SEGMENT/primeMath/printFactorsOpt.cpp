#include<iostream>
#include<cmath>
using namespace std;
void printFactors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=sqrt(n)) cout<<n/i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    printFactors(n);
    return 0;
}