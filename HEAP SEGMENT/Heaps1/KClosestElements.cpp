#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
class Solution {
public:
    typedef pair<int,int> p;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<p> pq;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int diff = abs(arr[i] - x);
            int ele = arr[i];
            pq.push({diff, ele});
            if(pq.size() > k) pq.pop();
        }
        while(pq.size() > 0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    vector<int> v = {1,2,3,4,5};
    int k = 4;
    Solution s;
    vector<int> ans = s.findClosestElements(v,k,3);
    for(int ele : ans) cout<<ele<<" ";
}