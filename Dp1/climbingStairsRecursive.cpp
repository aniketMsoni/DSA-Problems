#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        return climbStairs(n-1) + climbStairs(n-2) + climbStairs(n-3);
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