#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    vector<int> arr(v.size());
    arr.at(0) = -1;
    int max = v[0];
    for(int i=1;i<v.size();i++){
        arr[i] = max;
        if(max<v[i]) max = v[i];
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    return 0;
}
