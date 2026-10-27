// Input a string of length less than 10 and convert it into integer without using builtin function
#include<iostream>
#include<cmath>
using namespace std;
int main(){   
    string str;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n>10){
        cout<<"String has exceeded limit...";
        return 0;
    }
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        str.push_back(x);
    } 
    int store = 0,sum = 0;
    for(int i=0;i<n;i++){
       store = str[i] - '0';
       sum = sum*10 + store;
    }
    cout<<sum;
    return 0;
}