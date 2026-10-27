// Given an array of strings then checking whether they are anagram or not.
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter string array size : ";
    cin>>n;
    // Code with array consists of two strings only...
    if(n==2){
        vector<string> v;
        cout<<"Enter two strings respectively : ";
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            v.push_back(str);
         }
        string s = v[0], t = v[1];
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) cout<<"True";
        else cout<<"False";
    }
    // Code with array consists of one or more strings
    else{
        vector<string> v1;
        for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v1.push_back(x);
        }
        for(int i=0;i<v1.size();i++){
        sort(v1[i].begin(),v1[i].end());
        }
        bool flag = true; // all strings after sorting are equal!
        for(int i=0;i<v1.size();i++){
            string temp = v1[i];
            for(int j=i+1;j<v1.size();j++){
                if(temp!=v1[j]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag==true) cout<<"True";
        else cout<<"False";
    }
}