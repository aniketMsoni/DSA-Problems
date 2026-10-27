#include<iostream>
using namespace std;
void sum1(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1(sum+n,n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    sum1(0,n);
    return 0;
}