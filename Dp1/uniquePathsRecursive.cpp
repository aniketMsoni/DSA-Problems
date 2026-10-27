#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int helper(int sr, int sc, int er, int ec){
        if(sr == er and sc == ec) return 1; 
        if(sr > er or sc > ec) return 0;
        int rightWays = helper(sr, sc+1, er, ec);
        int downWays = helper(sr+1, sc, er, ec);
        return rightWays + downWays;
    }
    int uniquePaths(int m, int n){
        return helper(0, 0, m-1, n-1);
    }
};
int main(){
    int m, n;
    cin>>m>>n;
    Solution s;
    cout<<s.uniquePaths(m, n);
}