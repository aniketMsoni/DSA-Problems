// Searching target in 2D matrix using binary search
// Time complexity -- O(m*log(n))
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter m : ";
    cin>>m;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[m][n];
    // input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<"Enter x : ";
    cin>>x;
    // search
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    for(int i=0;i<m;i++){
        if(arr[i][hi]<x || arr[i][lo]>x) continue;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[i][mid]==x){
                flag = true;
                break;
            }
            else if(arr[i][mid]<x) lo = mid + 1;
            else hi = mid - 1;
        }
        if(flag==false) break;
    }
    if(flag==false) cout<<"Element not found";
    else cout<<"Element found";
    return 0;
}