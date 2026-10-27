#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string s : ";
    getline(cin,s);
    string t;
    cout<<"Enter string t : ";
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"T is an anagram of S and otherwise..."<<endl;
    else cout<<"No, both strings are not anagram of one another..."<<endl;
    return 0;
}