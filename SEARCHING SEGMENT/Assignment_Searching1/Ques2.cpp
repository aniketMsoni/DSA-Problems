// Given a sorted binary array, efficiently count the total number of 1’s in it.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n==0){
        cout<<"Empty array!";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo = 0;
    int hi = n-1;
    int firstOcc = -1, x = 1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid]==0 || arr[mid]!=arr[mid-1]){
                firstOcc = mid;
                break;
            }
            else{
                hi = mid - 1;
            }
        }
        else if(arr[mid]>x){
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    
    if(firstOcc==-1) cout<<"Not present";
    else cout<<(n-firstOcc);
    return 0;
}