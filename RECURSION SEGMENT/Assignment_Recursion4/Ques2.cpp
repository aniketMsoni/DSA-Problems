// Given an integer array containing duplicate numbers, return power set, containing all the subsets of the set Leetcode - 78
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void powersetDuplicate(vector<vector<int>>& FinalAns,vector<int> ans, vector<int> arr, int idx, bool flag){
    if(idx==arr.size()){
        FinalAns.push_back(ans);
        return;
    } 
    powersetDuplicate(FinalAns,ans,arr,idx+1,false);
    if (idx == 0 || arr[idx] != arr[idx - 1] || flag) {
        ans.push_back(arr[idx]);
        powersetDuplicate(FinalAns, ans, arr, idx + 1, true);
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> FinalAns;
    sort(arr.begin(),arr.end());
    powersetDuplicate(FinalAns, {}, arr, 0, true);
    for(int i=0;i<FinalAns.size();i++){
        for(int j=0;j<FinalAns[i].size();j++){
            cout<<FinalAns[i][j]<<" ";
        }
        cout<<endl;
    }
}