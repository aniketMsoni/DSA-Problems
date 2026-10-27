#include<iostream>
#include<vector>
#include<string>
using namespace std;
void storeSubset(string ans, string original, int idx, vector<string>& v){
    if(idx==original.length()){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    storeSubset(ans,original,idx+1,v);
    storeSubset(ans+ch,original,idx+1,v);
}
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    vector<string> v;
    storeSubset("",s,0,v);
    for(auto ele : v){
        cout<<ele<<endl;
    }
    return 0;
}