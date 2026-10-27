#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int ele : nums) m[ele]++;

        struct cmp{
            bool operator()(pair<int,int> a, pair<int,int> b){
                if(a.first==b.first) return a.second < b.second;
                return a.first > b.first;
            }
        };
        priority_queue<pi,vector<pi>,cmp> pq;
        for(auto x : m){
            int freq = x.second;
            int num = x.first;
            pq.push({freq,num});
        }
        vector<int> ans;
        while(pq.size()>0){
            int freq = pq.top().first;
            int num = pq.top().second;
            for(int i=1;i<=freq;i++) ans.push_back(num);
            pq.pop();
        }
        return ans;
    }
};
int main(){
    vector<int> v = {1,3,2,1,1,3};
    int k = 2;
    Solution s;
    vector<int> ans = s.frequencySort(v);
    for(int ele : ans) cout<<ele<<" ";
}