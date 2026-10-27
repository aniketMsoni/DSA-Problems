#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef pair<char,int> pci;
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pci> pq;
        for(pci p : mp){
            pq.push(p);
        }
        string result = "";
        while(pq.size() > 0){
            pci largest = pq.top();
            pq.pop();
            int len = min(repeatLimit, largest.second);
            for(int i=0;i<len;i++){
                result += largest.first;
            }
            pci secondLargest;
            if(largest.second - len > 0){
                if(!pq.empty()){
                    secondLargest = pq.top();
                    pq.pop();
                    result += secondLargest.first;
                }
                else return result;

                if(secondLargest.second - 1 > 0) pq.push({secondLargest.first, secondLargest.second-1});
                pq.push({largest.first, largest.second-len});
            }
        }
        return result;
    }
};
int main(){
    int r = 3;
    string str = "cczazcc";
    Solution s;
    cout<<s.repeatLimitedString(str, r);
    return 0;
}