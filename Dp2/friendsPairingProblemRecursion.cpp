#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countFriendsPairings(int n) {
        if(n <= 2) return n;
        return countFriendsPairings(n-1) + (n-1)*countFriendsPairings(n-2);
    }
};
int main(){
    int n;
    cout<<"Enter no of friends: ";
    cin>>n;
    Solution s;
    cout<<s.countFriendsPairings(n);
}