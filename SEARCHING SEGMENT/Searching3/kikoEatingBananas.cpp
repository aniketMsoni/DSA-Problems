#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool check(int mid, vector<int>& piles, int h){
    int n = piles.size();
    long long count = 0;
    for(int i=0;i<n;i++){
        //if(count>h) return false;
        if(piles[i]<=mid) count++;
        else if(piles[i]%mid==0) count += (long long)(piles[i]/mid);
        else count += (long long)(piles[i]/mid + 1);
    }
    if(count>(long long)h) return false;
    else return true;
}
int minEatingSpeed(vector<int>& piles, int h){
    int n = piles.size();
    int lo = 1;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<piles[i]) max = piles[i];
    }
    int hi = max;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(check(mid,piles,h)){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    return ans;
}
int main(){
    vector<int> piles;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        piles.push_back(x);
    }
    int h;
    cout<<"Enter h : ";
    cin>>h;
    int speed = minEatingSpeed(piles,h);
    cout<<speed;
}