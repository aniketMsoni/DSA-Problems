#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a, vector<int>& b){
    return a[1] < b[1];
}
class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        // Lowest hanging fruit
        vector<vector<int>> intervals;
        for(int i=0;i<start.size();i++){
            intervals.push_back({start[i], finish[i]});
        }
        sort(intervals.begin(), intervals.end(), cmp);
        int count = 0;
        int lastEndTime = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] <= lastEndTime){
                count++;
            }
            else{
                lastEndTime = intervals[i][1];
            }
        }
        return intervals.size() - count;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> start;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        start.push_back(x);
    }
    vector<int> finish;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        finish.push_back(x);
    }
    Solution s;
    cout<<s.activitySelection(start, finish);
    return 0;
}