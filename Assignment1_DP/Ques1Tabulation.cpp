// https://leetcode.com/problems/n-th-tribonacci-number/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int tribonacci(int n) {
        if(n <= 1) return n;
        vector<int> dp(n+1, -1);
        dp[0] = 0; dp[1] = dp[2] = 1;
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        return dp[n];
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