#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        vector<int> st;
        vector<int> e;
        for(vector<int> x : arr){
            st.push_back(x[0]);
            e.push_back(x[1]);
        }
        sort(st.begin(), st.end());
        sort(e.begin(), e.end());
        int i = 0;
        int j = 0;
        int rooms = 0;
        int count = 0;
        while(i < st.size() && j < e.size()){
            if(st[i] < e[j]){
                rooms++;
                count = max(count, rooms);
                i++;
            }
            else if(st[i] > e[j]){
                rooms--;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return count == 1;
    }
};
int main(){
    int n;
    cin>>n;
    vector<vector<int>> intervals;
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        intervals.push_back({x,y});
    }

    Solution s;
    cout<<s.canAttend(intervals);
}