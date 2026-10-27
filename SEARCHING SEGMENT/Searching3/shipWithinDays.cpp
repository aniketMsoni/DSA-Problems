#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool check(int mid, vector<int>& weights, int days){
    int n = weights.size();
    int m = mid; // current capacity
    int count = 1; // represents the days
    for(int i=0;i<n;i++){
        if(m>=weights[i]){
            m -= weights[i];
        }
        else{
            count++;
            m = mid;
            m -= weights[i];
        }
    }
    if(count>days) return false;
    else return true;
}
int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();
    int max = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(max<weights[i]) max = weights[i];
        sum += weights[i];
    }
    int lo = max;
    int hi = sum;
    int minCapacity = sum;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(check(mid,weights,days)){
            minCapacity = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    return minCapacity;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int days;
    cout<<"Enter days : ";
    cin>>days;
    int minCapacity = shipWithinDays(v,days);
    cout<<minCapacity;
    return 0;
}