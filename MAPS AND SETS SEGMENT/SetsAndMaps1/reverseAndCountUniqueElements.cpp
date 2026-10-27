#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int reverse(int n){
        int r = 0;
        while(n > 0){
            r *= 10;
            r += (n%10);
            n /= 10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int rev = reverse(nums[i]);
            nums.push_back(rev);
        }
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size();

        // Optimised approach
        // int n = nums.size();
        // unordered_set<int> s;
        // for(int i=0;i<n;i++){
        //     s.insert(nums[i]);
        //     int rev = reverse(nums[i]);
        //     s.insert(rev);
        // }
        // return s.size();
    }  
};
int main(){
    vector<int> v = {1,13,10,12,31};
    Solution s;
    cout<<s.countDistinctIntegers(v);
}