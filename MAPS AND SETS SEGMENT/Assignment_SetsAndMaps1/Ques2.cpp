// Leetcode -- 1122 Relative sort array
#include<iostream>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<climits>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int ele : nums) m[ele]++;
        int count = 0;
        for(auto x : m){
            int num = x.first;
            int rem = k - num;
            if(m.find(rem) != m.end() && (m[rem]!=0 && m[num]!=0)){
                if(num == rem){
                    if(m[num]>=2){
                        count += (m[num]/2);
                        if(m[num]%2==0) m[num]=0;
                        else m[num] = 1;
                    }
                }
                else{
                    count += min(m[num], m[rem]);
                    m[num] = m[rem] = 0;
                }
            }
        }
        return count;
    }
};
int main(){
    vector<int> arr1 = {1,2,3,4};
    Solution s;
    cout<<s.maxOperations(arr1, 5);
}