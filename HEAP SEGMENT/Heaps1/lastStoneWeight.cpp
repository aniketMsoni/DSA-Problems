#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int ele : stones){
            pq.push(ele);
        }
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x != y){
                pq.push(x-y);
            }
        }
        if(pq.size()==0) return 0;
        return pq.top();
    }
};
int main(){
    vector<int> v = {2,7,4,1,8,1};
    Solution s;
    cout<<s.lastStoneWeight(v);
}