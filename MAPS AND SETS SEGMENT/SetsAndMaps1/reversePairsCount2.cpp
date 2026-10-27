#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        unordered_set<string> s;
        int count = 0;
        for(int i=0;i<n;i++){
            string rev = words[i];
            reverse(rev.begin(), rev.end());
            if(s.find(rev) != s.end()) count++;
            else s.insert(words[i]);
        }
        return count;
    }
};
int main(){
    vector<string> v = {"cd","ac","dc","ca","zz"};
    Solution s;
    cout<<s.maximumNumberOfStringPairs(v);
}