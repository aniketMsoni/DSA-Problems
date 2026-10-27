#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter string length : ";
    cin>>n;
    char str[n+1];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    str[n] = '\0';
    for(int i=0;i<n;i++){
        if(i%2==0){
            str[i] = 'a';
        }
    }
    cout<<str;
}