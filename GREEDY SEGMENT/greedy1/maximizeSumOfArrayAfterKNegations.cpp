#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int> > pq(nums.begin(), nums.end());
        int sum = 0;
        for(int ele : nums) sum += ele;
        while(k--){
            int ele = pq.top();
            if(ele == 0) break;

            pq.pop();
            sum -= ele;
            pq.push(-ele);
            sum += (-ele);
        }
        return sum;
    }
};
int main(){
    vector<int> nums = {4,2,3};
    Solution s;
    cout<<s.largestSumAfterKNegations(nums, 1);
    return 0;
}