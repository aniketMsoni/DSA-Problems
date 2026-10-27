#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> pre(n,0);
        pre[0] = arr[0];
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] + arr[i];
        }
        int count = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(pre[i]==k){ 
                count++;
            }
            int rem = pre[i] - k;
            if(mp.find(rem)!=mp.end()) count += mp[rem];
            mp[pre[i]]++;
        }
        return count;
    }
};
int main(){
    vector<int> a = {0,0,0,0};
    Solution s;
    cout<<s.subarraySum(a,0);
}