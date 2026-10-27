#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(26,0);
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int ascii = (int)ch;
        v[ascii - 97]++;
    }
    int mx = 0;
    for(int i=0;i<26;i++){
        if(v[i]>mx) mx = v[i];
    }
    for(int i=0;i<26;i++){
        if(mx==v[i]){
            cout<<(char)(i+97)<<" "<<mx;
        }
    }
    return 0;
}