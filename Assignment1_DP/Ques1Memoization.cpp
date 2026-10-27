// https://leetcode.com/problems/n-th-tribonacci-number/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(int n, vector<int>& dp){
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = helper(n-1, dp) + helper(n-2, dp) + helper(n-3, dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+1, -1);
        return helper(n, dp);
    }
};
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    Solution s;
    cout<<s.tribonacci(n);
    return 0;
}