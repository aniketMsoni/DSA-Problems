// minCostToClimbStairsRecursive.cpp
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(vector<int>& cost, int i, int sum){
        if(i >= cost.size()) return sum;
        return min(helper(cost, i+1, sum+cost[i]), helper(cost, i+2, sum+cost[i]));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(helper(cost, 0, 0), helper(cost, 1, 0));
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