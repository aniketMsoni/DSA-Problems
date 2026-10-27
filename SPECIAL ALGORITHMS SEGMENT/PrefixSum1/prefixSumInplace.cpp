#include<iostream>
#include<vector>
using namespace std;
vector<int> prefixSum(vector<int>& nums){
    int n = nums.size();
    for(int i=1;i<n;i++){
        nums[i] = nums[i] + nums[i-1];
    }
    return nums;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = prefixSum(arr);
    for(auto ele : ans){
        cout<<ele<<" ";
    }
}