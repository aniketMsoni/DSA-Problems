#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int count = 1;
        int i = 1;
        int end = points[0][1];
        while(i < points.size()){
            if(points[i][0] <= end){
                end = min(end, points[i][1]);
                i++;
                continue;
            }
            else{
                count++;
                end = points[i][1];
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