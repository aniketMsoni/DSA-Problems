#include<iostream>
using namespace std;
int maxPowerOf2(int n){
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    return (n+1)>>1;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int y = n;
    int temp = 1;
    while(n != 0){
        temp = n;
        n = n & (n-1);
    } 
    cout<<temp<<endl;
    cout<<maxPowerOf2(y);
    return 0;
}