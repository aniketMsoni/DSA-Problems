// Applying binary search in infinite array
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
    int hi = 1;
    while(x>arr[hi]){
        lo = hi;
        hi *= 2;
    }
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            flag = true;
            break;
        }
        else if(arr[mid]>x) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag==true) cout<<"Target found";
    else cout<<"Error, Target not found";    
}