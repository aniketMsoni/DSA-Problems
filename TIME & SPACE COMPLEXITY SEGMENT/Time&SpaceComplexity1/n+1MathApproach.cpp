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
    int arraySum = 0;
    int sizeSum = ((v.size()-1)*(v.size()-1+1))/2;
    for(int i=0;i<v.size();i++){
        arraySum += v[i];
    }
    cout<<arraySum-sizeSum;
}