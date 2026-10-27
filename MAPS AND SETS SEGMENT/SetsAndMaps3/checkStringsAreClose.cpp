#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if(str1.size() != str2.size()) return false;
        
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i=0;i<str1.size();i++){
            m1[str1[i]]++;
            m2[str2[i]]++;
        }
        
        // comparing map1 and map2
        for(auto x : m1){
            char ch = x.first;
            if(m2.find(ch)==m2.end()) return false;
        }
        unordered_map<int,int> freq1;
        unordered_map<int,int> freq2;
        for(auto x : m1){
            freq1[x.second]++;
        }
        for(auto x : m2){
            freq2[x.second]++;
        }

        // comparing freq1 and freq2 maps
        for(auto x : freq1){
            int key = x.first;
            if(freq1.find(key) == freq2.end()) return false;
            if(freq1[key] != freq2[key]) return false;
        }
        return true;
    }
};
int main(){
    Solution s;
    cout<<s.closeStrings("abc", "bca");
}