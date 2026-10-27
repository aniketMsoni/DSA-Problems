#include<iostream>
using namespace std;
string decimalToBinary(int n){
    string result = "";
    while(n>0){
        if(n%2==0) result = "0" + result;
        else result = "1" + result;
        n = n >> 1;
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<decimalToBinary(n);
    return 0;
}