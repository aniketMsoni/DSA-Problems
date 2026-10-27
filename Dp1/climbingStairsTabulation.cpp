#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return n;
        vector<int> dp(n+1, -1);
        dp[0] = 0; dp[1] = 1; dp[2] = 2;
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    Solution s;
    cout<<s.climbStairs(n);
    return 0;
}