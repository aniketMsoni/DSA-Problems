#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        int result = 0;
        for(int i=0;i<answers.size();i++){
            if(mp.find(answers[i] + 1) == mp.end()){
                result += (answers[i] + 1); // we started a new color group
                if(answers[i] == 0) continue;
                mp[answers[i] + 1]++; // (1) : 1
            }
            else{
                mp[answers[i] + 1]++; // (1) : 2
                int key = answers[i];
                int value = mp[key];
                if(key == value) mp.erase(key); // we found all the rabbits of the group -- so eliminate the group
            }
        }
        return result;
    }
};
int main(){
    int n;
    cout<<"Enter answer's size : ";
    cin>>n;
    vector<int> answer;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        answer.push_back(x);
    }

    Solution s;
    cout<<s.numRabbits(answer);
}