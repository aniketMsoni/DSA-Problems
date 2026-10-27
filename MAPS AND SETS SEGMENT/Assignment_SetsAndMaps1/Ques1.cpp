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
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans; // 0(m) space
        unordered_map<int,int> m; // value - freq map and 0(m) space
        unordered_set<int> s (arr2.begin(), arr2.end()); // 0(n) space and time
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int ele : arr1){
            m[ele]++;
            if(s.find(ele) == s.end()){
                mn = min(mn, ele);
                mx = max(mx, ele);
            }
        }
        int i = 0;
        while(i<arr2.size()){
            int freq = m[arr2[i]];
            for(int j=1;j<=freq;j++) ans.push_back(arr2[i]);
            m.erase(arr2[i]);
            i++;
        }
        for(int j=mn;j<=mx;j++){
            if(m.find(j)!=m.end()){
                int freq = m[j];
                for(int k=1;k<=freq;k++) ans.push_back(j);
                m.erase(j);
            }
        }
        return ans;
    }
};
int main(){
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};
    Solution s;
    vector<int> result = s.relativeSortArray(arr1, arr2);
    for(int ele : result) cout<<ele<<" ";
}