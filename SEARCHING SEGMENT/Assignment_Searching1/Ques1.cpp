// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ does not exist return -1.
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
            if(arr[mid+1]!=x){
                cout<<"Last Occurence of "<<x<<" is : "<<mid;
                flag = true;
                break;
            }
            else{
                lo = mid + 1;
            }
        }
        else if(arr[mid]<x){
            lo = mid + 1;
        }
        else hi = mid + 1;
    }
    if(flag == false) cout<<-1;
    return 0;
}