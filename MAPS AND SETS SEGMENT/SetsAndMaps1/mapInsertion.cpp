#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["raghav"] = 79;
    m["harsh"] = 42;
    m["lokesh"] = 57;

    cout<<m.size()<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    m.erase("raghav");
    m.erase("lokesh");
    m.erase("aniket");
    cout<<m.size()<<endl;

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
