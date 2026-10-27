#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        // code here
        priority_queue< int, vector<int>, greater<int> > pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }
        int cost = 0;
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            cost += (x+y);
            pq.push(x+y);
        }
        return cost;
    }
};
int main(){
    vector<int> v = {2,7,4,1,8};
    Solution s;
    cout<<s.minCost(v);
}