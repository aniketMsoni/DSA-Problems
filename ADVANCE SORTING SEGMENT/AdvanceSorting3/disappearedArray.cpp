#include<iostream>
#include<vector>
using namespace std;
vector<int> disappeared(vector<int>& v){
    int n = v.size();
    int i = 0;
    vector<int> ans;
    while(i<n){
        int correctIdx = v[i] - 1;
        if(v[correctIdx]==v[i]) i++;
        else swap(v[i],v[correctIdx]);
    }
    for(int i=0;i<n;i++){
        if(v[i]!=i+1) ans.push_back(i+1);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = disappeared(arr);
    for(int ele : ans){
        cout<<ele<<" ";
    }
}