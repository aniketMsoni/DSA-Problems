#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(int n, vector<int>& dp){
        if(n <= 2) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = helper(n-1, dp) + (n-1) * helper(n-2, dp);
    }
    int countFriendsPairings(int n) {
        vector<int> dp(n+1, -1);
        return helper(n, dp);
    }
};

int main(){
    int n;
    cout<<"Enter no of friends: ";
    cin>>n;
    Solution s;
    cout<<s.countFriendsPairings(n);
}