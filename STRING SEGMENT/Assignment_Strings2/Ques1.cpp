// Input a string and concatenate with its reverse string and print it.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    string store = s;
    reverse(s.begin(),s.end()); 
    store += s;
    cout<<store;  
}