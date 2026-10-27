#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m; // key and freq
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        unordered_set<int> s;
        for(auto p : m){
            int freq = p.second;
            if(s.find(freq)!=s.end()) return false;
            s.insert(freq);
        }
        return true;
    }
};
int main(){
    vector<int> v = {1,2,1,2,1,3};
    Solution so;
    cout<<so.uniqueOccurrences(v);

}
