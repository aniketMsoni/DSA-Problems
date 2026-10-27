#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    int n = s.length();
    int count = 0;
    for(int i=0;i<s.size();i++){     
    if(n==1){
        cout<<count;
        break;
    }
    else if(n==2 && s[0]==s[1]){
        cout<<++count;
        break;
    }
    else if(i==0 && s[i]==s[i+1]){
        count++;
        i++;
    }
    else if(i==n-1 && s[i]==s[i-1]){
        count++;
    }
    else if(s[i]==s[i+1] || s[i]==s[i-1]){
        count++;
        i++;
    }
}
    cout<<count;
}