#include<iostream>
#include<vector>
using namespace std;
vector<int> findAllDuplicates(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    vector<int> ans;
    while(i<n){
        int correctIdx = nums[i] - 1;
        if(nums[correctIdx]==nums[i] || nums[i]==i+1) i++;
        else swap(nums[correctIdx],nums[i]);
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1){
            ans.push_back(nums[i]);
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
    vector<int> ans = findAllDuplicates(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}