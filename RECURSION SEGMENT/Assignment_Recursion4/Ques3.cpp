#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
void lCs(string s, string t, int sidx, int tidx, vector<int>& ans, int count){
    if(sidx==s.length() || tidx==t.length()){
        ans.push_back(count);
        return;
    }
    if(s[sidx]==t[tidx]){
        lCs(s,t,sidx+1,tidx+1,ans,count+1);
    }
    else{
        lCs(s,t,sidx+1,tidx,ans,count);
        lCs(s,t,sidx,tidx+1,ans,count);
    }
}
int main(){
    string s;
    cout<<"Enter 1st string : ";
    getline(cin,s);
    string t;
    cout<<"Enter 2nd string : ";
    getline(cin,t);
    vector<int> ans;
    if(s.length()<t.length()) lCs(s,t,0,0,ans,0);
    else lCs(t,s,0,0,ans,0);
    int max = INT_MIN;
    for(int i=0;i<ans.size();i++){
        if(max<ans[i]) max = ans[i];
    }
    cout<<max;
}