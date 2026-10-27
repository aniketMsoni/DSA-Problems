#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i == 0 and j == 0) dp[0][0] = grid[0][0];
                else if(i == 0 or j == 0){
                    if(i == 0) dp[i][j] = grid[i][j] + dp[i][j-1];
                    else dp[i][j] = grid[i][j] + dp[i-1][j];
                }
                else dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];
    }
};
int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<int>> grid(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    Solution s;
    cout<<s.minPathSum(grid);
    return 0;
}