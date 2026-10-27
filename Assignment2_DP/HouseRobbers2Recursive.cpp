#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(vector<int>& nums, int idx, int end){
        if(idx > end) return 0;
        return max(nums[idx] + helper(nums, idx+2, end), helper(nums,idx+1, end));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return nums[0];
        return max(helper(nums, 0, n-2), helper(nums, 1, n-1));
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