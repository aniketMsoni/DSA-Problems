#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int bt = 0;
        int i = 0, j = people.size() - 1;
        while(i <= j){
            if((people[i] + people[j]) <= limit){
                bt++; // allocate a boat to the pair
                i++;
                j--;
            }
            else{
                bt++; // allocate a boat to the heaviest
                j--;
            }
        }
        return bt;
    }
};
int main(){
    vector<int> v = {3,2,2,1};
    int limit = 3;
    Solution s;
    cout<<s.numRescueBoats(v, limit);
    return 0;
}