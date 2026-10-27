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
                flag = true;
                cout<<"Last Occurence of target : "<<mid;
                break;
            }
            else{
                lo = mid + 1;
            }
        }
        else if(arr[mid]>x) hi = mid - 1;
        else lo = mid + 1;
    }
    return 0;
}