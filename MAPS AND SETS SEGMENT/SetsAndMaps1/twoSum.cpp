#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> map1;
        for(int i=0;i<nums.size();i++){
            int rem = target - nums[i];
            if(map1.find(rem)!=map1.end()){
                ans.push_back(map1[rem]);
                ans.push_back(i);
                return ans;
            }
            map1[nums[i]] = i;
        }
        return ans;
    }
};
int main(){
    vector<int> v = {2,7,9,11};
    Solution so;
    vector<int> ans = so.twoSum(v,9);
    for(auto ele : ans) cout<<ele<<" ";
}
