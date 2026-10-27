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
    int target;
    cout<<"Enter target : ";
    cin>>target;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            cout<<arr[mid-1];
            flag = true;
            break;
        }
        else if(arr[mid]<target ){
            lo = mid + 1;
        }
        else if(arr[mid]>target){
            hi = mid - 1;
        }
    }
    if(flag==false) cout<<arr[hi];
}