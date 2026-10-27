#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(int n, vector<int>& dp){
        if(n == 0 || n == 1) return 0;
        if(n == 2) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = (n-1)*(helper(n-1, dp) + helper(n-2, dp));
    }
    int derangeCount(int n) {
        // code here
        vector<int> dp(n+1, -1);
        return helper(n, dp);
    }  
};
int main(){
    int n;
    cin>>n;
    
    return 0;
}