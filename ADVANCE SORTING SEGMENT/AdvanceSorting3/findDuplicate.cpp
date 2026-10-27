#include<iostream>
#include<vector>
using namespace std;
int findDuplicates(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    while(i<n){
        int correctIdx = nums[i];
        if(nums[correctIdx]==nums[i]) return nums[i];
        else swap(nums[i],nums[correctIdx]);
    }
    return 100;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findDuplicates(arr);
    return 0;
}