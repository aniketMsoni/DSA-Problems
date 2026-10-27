#include<iostream>
#include<cmath>
using namespace std;
void printFactorsInOrder(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) cout<<i<<" ";
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    printFactorsInOrder(n);
    return 0;
}