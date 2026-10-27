#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        for(int ans : answers) mp[ans]++;
        int count = 0;
        for(auto x : mp){
            int total = x.first; // no of other rabbits of same color 
            int freq = x.second; // freq of rabbits who say that there are certain other rabbits with same color
            if(total == 0) count += freq; // 0 wala case
            else if(freq == 1) count += (1 + total);
            else if(freq != 1){
                if(freq > total + 1){
                    int t = total + 1;
                    int m = freq / t;
                    int rem = freq % t;
                    count += (m * (total + 1));
                    if(rem != 0){
                        count += (total + 1);
                    }
                }
                else{
                    count += (total + 1);
                }
            }
        }
        return count;
    }
};
int main(){
    int n;
    cout<<"Enter answer's size : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    Solution s;
    cout<<s.numRabbits(v);
}