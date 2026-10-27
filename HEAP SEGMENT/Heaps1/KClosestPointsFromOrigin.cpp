#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,vector<int>>> pq;
        for(int i=0;i<points.size();i++){
            int xCoordinate = points[i][0];
            int yCoordinate = points[i][1];
            int distance = xCoordinate*xCoordinate + yCoordinate*yCoordinate;
            pq.push({distance, points[i]});
            if(pq.size() > k) pq.pop();
        }
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
int main(){
    vector<vector<int>> v = {{3,3},{5,1},{-2,4}};
    int k = 2;
    Solution s;
    vector<vector<int>> ans = s.kClosest(v,k);
    for(vector<int> ele : ans){
        for(int j : ele) cout<<j<<" ";
        cout<<endl;
    }
}