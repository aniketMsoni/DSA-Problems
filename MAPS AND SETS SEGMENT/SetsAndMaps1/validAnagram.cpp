#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        // filling freq in map
        for(int i=0;i<s.size();i++){
            map1[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            map2[t[i]]++;
        }
        // checking frequency
        for(auto p : map1){
            char ch1 = p.first;
            int freq1 = p.second;
            if(map2.find(ch1)!=map2.end()){
                int freq2 = map2[ch1];
                if(freq1 != freq2) return false;
            }
            else return false;
        }
        return true;
    }
};
int main(){
    string s = "anagram";
    string t = "nagaram";
    Solution so;
    cout<<so.isAnagram(s,t);
}
