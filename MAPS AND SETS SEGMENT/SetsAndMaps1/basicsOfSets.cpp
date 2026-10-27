#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    // insertion
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(1);
    cout<<s.size()<<endl;
    // printing
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    s.erase(2);
    cout<<s.size()<<endl;
    for(int ele : s){
        cout<<ele<<" ";
    }
    s.insert(2);
    cout<<endl;
    int target = 4;
    if(s.find(target)!=s.end()) cout<<"Tgt exists";
    else cout<<"Tgt doesn't exists";
}