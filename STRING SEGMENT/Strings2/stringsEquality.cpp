#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter string 1 : ";
    getline(cin,s);
    string t;
    cout<<"Enter string 2 : ";
    getline(cin,t);
    if(s.length()!=t.length()){
        cout<<"Strings are not equivalent!!!";
        return 0;
    }
    bool flag = true; // Means both are equivalent
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[i]){
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"True";
    else cout<<"False";
    return 0;
}