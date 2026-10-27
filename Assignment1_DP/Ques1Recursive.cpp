// https://leetcode.com/problems/n-th-tribonacci-number/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    Solution s;
    cout<<s.tribonacci(n);
    return 0;
}