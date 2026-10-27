#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if(n == 1) return 1; // edge case -- only 1 fruit
        int i = 0;
        int j = 1;
        int mxCount = INT_MIN;
        unordered_map<int,int> mp;
        mp[fruits[i]]++;
        while(i < n and j < n){
            mp[fruits[j]]++;
            if(mp.size() > 2){
                while(mp.size() > 2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]] == 0) mp.erase(fruits[i]);
                    i++;
                }
            }
            mxCount = max(mxCount, j - i + 1);
            j++;
        }
        return mxCount;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> fruits(n);
    for(int i=0;i<n;i++){
        cin>>fruits[i];
    }
    Solution s;
    cout<<s.totalFruit(fruits);
}