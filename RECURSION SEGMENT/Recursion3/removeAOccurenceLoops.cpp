#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    string str = "";
    for(int i=0;i<s.length();i++){
        if(s[i]!='a') str += s[i];
    }
    cout<<str;
}