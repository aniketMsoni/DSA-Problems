#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(1);
    v.push_back(7);
    v.push_back(1);
    v.push_back(5);
    bool flag = false; // duplicate is not yet found
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                cout<<v[i];
                flag = true;
                break;
            }
        }
        if(flag==true) break;
    }
    return 0;
}