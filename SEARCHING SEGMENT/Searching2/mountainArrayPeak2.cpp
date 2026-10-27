// Time Complexity = O(logn)
#include<iostream>
#include<vector>
using namespace std;
int mountainArray(vector<int>& arr){
    int n = arr.size();
    int lo = 0;
    int hi = n;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        else if(arr[mid]>arr[mid+1]){
            hi = mid;
        }
        else if(arr[mid]>arr[mid-1]){
            lo = mid;
        }
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Peak of Mountain Array is at index : "<<mountainArray(v);
    return 0;
}