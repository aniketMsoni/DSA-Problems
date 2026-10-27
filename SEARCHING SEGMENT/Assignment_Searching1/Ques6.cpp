// You have n coins and you want to build a staircase with these coins. The staircase consists of k
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build
#include<iostream>
using namespace std;
int arrangeCoins(int n){
    int lo = 1;
    int hi = n;
    while(lo<=hi){
        int k = lo + (hi-lo)/2;
        long long j = (long long)k;
        long long x = (long long)n;
        if((j*(j+1))/2==x) return k;
        else if((j*(j+1))/2>x) hi = k - 1;
        else if((j*(j+1))/2<x) lo = k + 1;
    }
    return hi;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int res = arrangeCoins(n);
    cout<<"Complete staircase that can be build using "<<n<<" coins are : "<<res;
}