#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    bool isFormable(unordered_map<int,int> m, int x){
        while(x > 0){
            int lastDigit = x % 10;
            if(m.find(lastDigit)!=m.end()){
                if(m[lastDigit]!=0) m[lastDigit]--;
                else return false;
            }
            else return false;
            x /= 10;
        }
        return true;
    }
    vector<int> findEvenNumbers(vector<int>& arr) {
        vector<int> v;
        unordered_map<int,int> m; // key and freq
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(int i=100;i<=999;i+=2){
            int temp = i;
            if(isFormable(m,temp)) v.push_back(temp);
        }
        return v;
    }
};
int main(){
    vector<int> v = {2,2,8,8,2};
    Solution s;
    vector<int> ans = s.findEvenNumbers(v);
    for(int ele : ans) cout<<ele<<" ";
}