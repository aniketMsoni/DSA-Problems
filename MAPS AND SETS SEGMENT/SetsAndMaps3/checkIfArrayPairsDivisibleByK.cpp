#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        for(int ele : arr){
            ele = ((ele % k) + k) % k;
            m[ele]++;
        }
        if(m.find(0) != m.end()){
            if(m[0]%2!=0) return false;
            m.erase(0);
        }

        for(auto x : m){
            int num = x.first;
            int rem = k - num;
            if(m.find(rem) == m.end()) return false;
            if(m[num] != m[rem]) return false;
        }
        return true;
    }
};
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    Solution s;
    cout<<s.canArrange(v,5);
    return 0;
}