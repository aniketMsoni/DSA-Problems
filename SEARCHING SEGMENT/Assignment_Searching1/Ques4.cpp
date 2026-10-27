// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive in sorted order.
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
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid+1==arr[mid]){
            lo = mid + 1;
        }
        else if(arr[mid]==mid){
            if(arr[mid-1]==arr[mid]){
                cout<<arr[mid];
                break;
            }
            else{ // arr[mid] =! mid
                hi = mid - 1;
            }
        }
        
    }
    return 0;
}