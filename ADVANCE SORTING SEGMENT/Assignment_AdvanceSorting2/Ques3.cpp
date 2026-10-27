// Given an array where all its elements are sorted in increasing order except two swapped elements, sort it in linear time. Assume there are no duplicate elements in the array
#include<iostream>
using namespace std;
void arrange(int arr[], int n){
    int idx1 = -1, idx2 = -1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(idx1==-1){
                idx1 = i;
                idx2 = i+1;
            }
            else{
                idx2 = i+1;
            }
        }
    }
    swap(arr[idx1],arr[idx2]);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arrange(arr,n);
    for(int ele : arr){
        cout<<ele<<" ";
    }
}