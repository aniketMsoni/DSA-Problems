// Return vector with the repeated and missing number from the array that faced error Leetcode - 645
#include<iostream>
#include<vector>
using namespace std;
vector<int> findDuplicateAndMissingNo(vector<int>& nums){
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    while(i<n){
        int correctIdx = nums[i] - 1;
        if(nums[correctIdx]==nums[i] || nums[i]==i+1) i++;
        else swap(nums[i],nums[correctIdx]);
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1){
            ans.push_back(nums[i]);
            ans.push_back(i+1);
        }
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
    vector<int> ans = findDuplicateAndMissingNo(arr);
    for(auto ele : ans ){
        cout<<ele<<" ";
    }
}