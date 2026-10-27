#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   // Bubble Sort
    for(int i=0;i<n-1;i++){ // n-1 passes
        // traverse
        for(int j=0;j<n-1-i;j++){ // j<n-1 is unoptimising the code
            if(arr[j]==0) swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}