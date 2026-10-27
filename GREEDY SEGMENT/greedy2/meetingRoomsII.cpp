#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minMeetingRooms(vector<vector<int>> &intervals) {
        // code here
        vector<int> st, e;
        for(auto x : intervals){
            st.push_back(x[0]);
            e.push_back(x[1]);
        }
        sort(st.begin(), st.end());
        sort(e.begin(), e.end());
        int i = 0;
        int j = 0;
        int rooms = 0;
        int count = 0;
        while (i < st.size()){
            if(st[i] == e[j]){
                i++;
                j++;
                continue;
            }
            else if(st[i] < e[j]){
                rooms++;
                count = max(count, rooms);
                i++;
            }
            else{
                rooms--;
                j++;
            } 
        }
        return count;
    }
};
int main(){
    vector<vector<int>> intervals;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int start, ending;
        cin>>start>>ending;
        intervals.push_back({start, ending});
    }

    Solution s;
    cout<<s.minMeetingRooms(intervals);
}