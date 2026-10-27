#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(2, vector<int>(n, 1));
        for(int i=1;i<=m-1;i++){
            // dp wala kaam
            for(int j=1;j<n;j++){
                dp[1][j] = dp[1][j-1] + dp[0][j];
            }
            // copy the 1st row to 0th row
            for(int j=0;j<n;j++){
                dp[0][j] = dp[1][j];
            }
        }
        return dp[1][n-1];
    }
};
int main(){
    int m, n;
    cin>>m>>n;
    Solution s;
    cout<<s.uniquePaths(m, n);
}