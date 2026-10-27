#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> str;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        str.push_back(s);
    }
    int z = str.size();
    if(z==1){
        cout<<str[0];
        return 0;
    }
    sort(str.begin(),str.end());
    string first = str[0];
    string last = str[n-1];
    string store = "";
    for(int i=0;i<(min(first.size(),last.size()));i++){
        if(first[i]==last[i]) store += first[i];
        else break;
    }
    cout<<"The common prefix amongst all the strings is : "<<store;
}