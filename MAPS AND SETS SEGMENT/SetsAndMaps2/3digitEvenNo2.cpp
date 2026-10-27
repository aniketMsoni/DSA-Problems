#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& arr) {
        vector<int> ans;
        unordered_map<int,int> m; // key and freq
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(int i=100;i<=999;i+=2){
            int x = i;
            int a = x % 10;
            x /= 10;
            int b = x % 10;
            x /= 10;
            int c = x;
            if(m.find(a)!=m.end()){
                m[a]--;
                if(m[a]==0) m.erase(a);
                if(m.find(b)!=m.end()){
                    m[b]--;
                    if(m[b]==0) m.erase(b); 
                    if(m.find(c)!=m.end()) ans.push_back(i);
                    m[b]++;
                }
                m[a]++;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> v = {2,2,8,8,2};
    Solution s;
    vector<int> ans = s.findEvenNumbers(v);
    for(int ele : ans) cout<<ele<<" ";
}