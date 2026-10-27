#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>& a, vector<int>& b){
    return a[1] < b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 0;
        sort(points.begin(), points.end(), cmp);
        int lastEndTime = points[0][1];
        for(int i=0;i<points.size();i++){
            if(points[i][0] <= lastEndTime){
                ans++;
            }
            else{
                lastEndTime = points[i][1];
            }
        }
        return points.size() - ans;
    }
};

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        v[i] = {x, y};
    }
    Solution s;
    cout<<s.findMinArrowShots(v);
    return 0;
}