// Input a string of size n and update all the odd positions in the string to character ‘#’ and Consider 0-based indexing
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        str.push_back(x);
    }
    for(int i=0;i<str.length();i++){
        if(i%2!=0) str[i] = '#';
    }
    cout<<str<<endl;
}