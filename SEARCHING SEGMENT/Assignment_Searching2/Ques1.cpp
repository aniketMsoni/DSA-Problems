// Applying binary search in array sorted in decreasing order.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            flag = true;
            break;
        }
        else if(arr[mid]<x) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag==false) cout<<"Element not found";
    else cout<<"Element found";
    return 0;
}