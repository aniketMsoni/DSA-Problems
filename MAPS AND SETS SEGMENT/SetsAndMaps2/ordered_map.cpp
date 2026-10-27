#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["raghav"] = 79;
    m["harsh"] = 42;
    m["lokesh"] = 57;
    for(auto p : m){
        cout<<p.first<<" ";
    }
    cout<<endl;
    map<int,int> mp;
    mp[11] = 79;
    mp[7] = 42;
    mp[9] = 57;
    for(auto p : mp){
        cout<<p.first<<" ";
    }
}