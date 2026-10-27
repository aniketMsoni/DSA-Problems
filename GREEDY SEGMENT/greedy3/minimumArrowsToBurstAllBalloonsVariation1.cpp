#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int count = 1;
        int endDist = points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0] <= endDist){
                endDist = min(endDist, points[i][1]);
                continue;
            }
            else{
                count++;
                endDist = points[i][1];
            }
        }
        return count;
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