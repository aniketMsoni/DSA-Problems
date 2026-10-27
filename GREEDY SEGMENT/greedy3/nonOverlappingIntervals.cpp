#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a, vector<int>& b){
    return a[1] < b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n == 1) return 0;
        sort(intervals.begin(), intervals.end(), cmp); // sorting on the basis of endtime
        int count = 0;
        int lastEndTime = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0] < lastEndTime) count++;
            else{
                lastEndTime = intervals[i][1];
            }
        }
        return count;
    }
};
int main(){
    int n;
    cin>>n;
    vector<vector<int>> intervals;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        intervals.push_back({a, b});
    }
    Solution s;
    cout<<s.eraseOverlapIntervals(intervals);
}