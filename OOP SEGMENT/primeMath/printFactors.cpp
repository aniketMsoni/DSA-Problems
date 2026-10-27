#include<iostream>
using namespace std;
void printFactor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    printFactor(n);
    return 0;
}