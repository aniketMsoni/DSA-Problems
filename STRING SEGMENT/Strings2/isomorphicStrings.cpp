#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isoMorph(string s,string t){
    if(s.length()!=t.length()) return false;
    vector<int> v(150,1000);
    for(int i=0;i<s.length();i++){
        int idx = (int)s[i];
        if(v[idx]==1000) v[idx] = s[i] - t[i];
        else if(v[idx]!=(s[i]-t[i])) return false;
    }
    for(int i=0;i<s.length();i++){
        int idx1 = (int)t[i];
        if(v[idx1]==1000) v[idx1] = t[i] - s[i];
        else if(v[idx1]!=(t[i]-s[i])) return false;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter string s : ";
    getline(cin,s);
    string t;
    cout<<"Enter string t : ";
    getline(cin,t);
    bool flag = isoMorph(s,t);
    if(flag==true) cout<<"The given two string 's' and 't' are isomorphic strings!";
    else cout<<"No!, The given strings are not isomorphic....";
    return 0;
}