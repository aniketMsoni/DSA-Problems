#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(2, vector<int>(n, 1));
        for(int i=1;i<=m-1;i++){
            if(i % 2 == 1){
                for(int j=1;j<n;j++){
                    dp[1][j] = dp[1][j-1] + dp[0][j];
                }
            }
            else{
                for(int j=1;j<n;j++){
                    dp[0][j] = dp[0][j-1] + dp[1][j];
                }
            }
        }
        return max(dp[1][n-1], dp[0][n-1]);
    }
};
int main(){
    int m, n;
    cin>>m>>n;
    Solution s;
    cout<<s.uniquePaths(m, n);
}