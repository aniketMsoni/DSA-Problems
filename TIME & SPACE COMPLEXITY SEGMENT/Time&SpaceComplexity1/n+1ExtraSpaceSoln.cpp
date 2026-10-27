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
    vector<int> v1(v.size(),0);
    for(int i=0;i<v.size();i++){
        int store = v[i];
        if(v1[store]==0) v1[store] = 1;
        else{
            cout<<v[i];
            break;
        }
    }
}