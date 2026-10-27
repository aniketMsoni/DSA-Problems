#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    int rev(int n){
        int r = 0;
        while(n != 0){
            r *= 10;
            r += (n % 10);
            n /= 10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        long long count = 0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int r = rev(nums[i]);
            if(m.find(nums[i]-r)!=m.end()){
                count += m[nums[i]-r];
            }
            m[nums[i] - r]++;
        }
        return count%1000000007;
    }
};
int main(){
    vector<int> v = {13,10,35,24,76};
    Solution s;
    cout<<s.countNicePairs(v);
}