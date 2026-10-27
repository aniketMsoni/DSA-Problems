#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(vector<int>& nums, int idx){
        if(idx >= nums.size()) return 0;
        int take = nums[idx] + helper(nums, idx+2);
        int skip = helper(nums, idx+1);
        return max(take, skip);
    }
    int rob(vector<int>& nums) {
        return helper(nums, 0);
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