#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        // map pair is <ele,freq>
        for(int ele : nums){
            m[ele]++;
        }
        // heap pair is <freq,ele>
        priority_queue< pi, vector<pi>, greater<pi> > pq;
        for(auto x : m){
            int ele = x.first, freq = x.second;
            pair<int,int> p = {freq,ele};
            pq.push(p);
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size() > 0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};
int main(){
    vector<int> v = {1,1,1,3,3,2};
    int k = 2;
    Solution s;
    vector<int> ans = s.topKFrequent(v, k);
    for(int ele : ans) cout<<ele<<" ";
}