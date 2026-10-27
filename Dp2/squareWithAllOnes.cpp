#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int count = 0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0) continue;
                if(i > 0 and j > 0){
                    matrix[i][j] += min(matrix[i-1][j], min(matrix[i][j-1], matrix[i-1][j-1]));
                }
                count += matrix[i][j];
            }
        }
        return count;
    }
};
int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    Solution s;
    cout<<s.countSquares(v);
}