//Given an integer array and an integer k where k<=size of array, we need to return the kth smallest element of the array
#include<iostream>
#include<vector>
using namespace std;
int returnK(int arr[],int n){
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
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter K : ";
    cin>>k;
    return arr[k-1];
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = returnK(arr,n);
    cout<<"The Kth smallest element which was required is : "<<result;
    return 0;
}