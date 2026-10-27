#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        if(arr[0][0] == 1 or arr[m-1][n-1] == 1) return 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i == 0 and j == 0) arr[i][j] = 1;
                else if(arr[i][j] == 1) arr[i][j] = -1;
                else if(i == 0 or j == 0){
                    if(i == 0) arr[i][j] = arr[i][j-1];
                    else arr[i][j] = arr[i-1][j];
                }
                else{
                    if(arr[i][j-1] == -1 or arr[i-1][j] == -1) arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
                    else arr[i][j] = arr[i][j-1] + arr[i-1][j];
                }
            }
        }
        if(arr[m-1][n-1] == -1) return 0;
        return arr[m-1][n-1];
    }
};
int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<int>> v;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    Solution s;
    cout<<s.uniquePathsWithObstacles(v);
}
