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
    int n = v.size();
    arr.at(n-1) = -1;
    int max = v[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i] = max;
        if(max<v[i]) max = v[i];
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    return 0;
}
