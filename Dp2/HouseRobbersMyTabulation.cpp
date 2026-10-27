#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> dp(nums.size(), -1);
        dp[0] = nums[0];
        dp[1] = nums[1];
        if(nums.size() > 2) dp[2] = nums[2] + dp[0];
        for(int i=3;i<nums.size();i++){
            dp[i] = nums[i] + max(dp[i-2], dp[i-3]);
        }
        return *max_element(dp.begin(), dp.end());
    }
};
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    Solution s;
    cout<<s.rob(v);
}