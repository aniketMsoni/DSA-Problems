#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int maxCount = 0,count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(maxCount<count) maxCount = count;
    }
    count = 1;
    for(int i=0;i<v.size();i++){
        int count = 1;
        if(v[i]==v[i+1]) count++;
        else count=1;
        if(maxCount==count) cout<<v[i]<<" "<<maxCount<<endl;
    }
}