#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int derangeCount(int n) {
        if(n == 0 || n == 1) return 0;
        if(n == 2) return 1;
        return (n-1)*(derangeCount(n-1) + derangeCount(n-2));
    }  
};
int main(){
    int n;
    cin>>n;
    
    return 0;
}