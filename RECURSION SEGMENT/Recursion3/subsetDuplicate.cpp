#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void storeSubset(string ans, string original, vector<string>& v, bool flag){
    if(original.length()==0){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,true);
        return; // Exists so that neeche ki do condition na chale
    }
    char dh = original[1];
    if(ch==dh){ // duplicate
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,false);
    }
    else{ // no duplicate
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,true);
    }

}
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    vector<string> v;
    sort(s.begin(),s.end());
    storeSubset("",s,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}