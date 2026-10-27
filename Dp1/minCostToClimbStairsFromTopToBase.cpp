// minCostToClimbStairsRecursive.cpp
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(vector<int>& cost, int i){
        if(i == 0 || i == 1) return cost[i];
        return min(helper(cost, i-1), helper(cost, i-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return min(helper(cost, n-1), helper(cost, n-2));
    }
};

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution s;
    cout<<s.minCostClimbingStairs(arr);
    return 0;
}