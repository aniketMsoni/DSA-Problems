// Checking whether the given array is almost sorted or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i] = arr[i];
    }
    // bubble sort
    for(int i=0;i<n-1;i++){ 
        bool flag = true;
        for(int j=0;j<n-1-i;j++){ 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true){ 
            break;
        }
    }
    // arr is sorted and brr is unsorted as well as original
    bool flag = true;
    for(int i=0;i<n;i++){
        if(i==0){
            if(brr[i]!=arr[i] && brr[i]!=arr[i+1]){
                flag = false;
                break;
            }
        } 
        else if(i==n-1){
            if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
                flag = false;
                break;
            }
        }
        else{
            if(brr[i]!=arr[i] && brr[i]!=arr[i-1] && brr[i]!=arr[i+1]){
                flag = false;
                break;
            }
        }
    }
    cout<<flag;
}