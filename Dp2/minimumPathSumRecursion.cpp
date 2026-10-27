#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(vector<vector<int>>& grid, int sr, int sc){
        if(sr == grid.size()-1 and sc == grid[0].size()-1) return grid[sr][sc];
        if(sr >= grid.size() or sc >= grid[0].size()) return INT_MAX;
        int rightWaySum = helper(grid, sr, sc+1);
        int downWaySum = helper(grid, sr+1, sc);
        return grid[sr][sc] + min(downWaySum, rightWaySum);
    }
    int minPathSum(vector<vector<int>>& grid) {
        return helper(grid, 0, 0);
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