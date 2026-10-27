// Given an integer array containing unique numbers, return power set, containing all the subsets of the set Leetcode - 78
#include<iostream>
#include<vector>
using namespace std;
void powerset(vector<vector<int>>& Finalans, vector<int> ans, int arr[], int n, int idx){
    if(idx==n){
        Finalans.push_back(ans);
        return;
    }
    powerset(Finalans,ans,arr,n,idx+1);
    ans.push_back(arr[idx]);
    powerset(Finalans,ans,arr,n,idx+1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> Finalans;
    vector<int> v;
    powerset(Finalans,v,arr,n,0);
    for(int i=0;i<Finalans.size();i++){
        for(int j=0;j<Finalans[i].size();j++){
            cout<<Finalans[i][j]<<" ";
        }
        cout<<endl;
    }
}