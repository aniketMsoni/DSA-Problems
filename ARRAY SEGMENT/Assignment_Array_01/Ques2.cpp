// Find the 2nd largest element in a given array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter the elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<max<<endl;
    int smax = INT_MIN;
    // for(int i=1;i<=n-1;i++){
    //     if(arr[i]!=max && smax<arr[i]) smax = arr[i];
    // }
    for(int i=1;i<=n-1;i++){
        if(smax<arr[i]){
            if(arr[i]==max) continue;
            else smax = arr[i];
        }
    }
    cout<<smax;
    }