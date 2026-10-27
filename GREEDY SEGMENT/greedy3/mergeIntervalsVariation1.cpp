#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        if(n <= 1) return intervals;
        vector<vector<int>> ans;
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0] > end){
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
            else{
                end = max(end, intervals[i][1]);
            }
        }
        ans.push_back({start, end});
        return ans;
    }
};
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<vector<int>> intervals;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        intervals.push_back({a, b});
    }
    Solution s;
    vector<vector<int>> result = s.merge(intervals);
    for(auto res : result){
        for(auto x : res) cout<<x<<" ";
        cout<<endl;
    }
}