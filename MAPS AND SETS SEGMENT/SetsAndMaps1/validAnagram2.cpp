#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int> map1;
        // filling freq in map
        for(int i=0;i<s.size();i++){
            map1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(map1.find(t[i])!=map1.end()){
                map1[t[i]]--;
                if(map1[t[i]]==0) map1.erase(t[i]);
            }
            else return false;
        }
        if(map1.size()==0) return true;
        return false;
    }
};
int main(){
    string s = "anagram";
    string t = "nagaram";
    Solution so;
    cout<<so.isAnagram(s,t);
}
