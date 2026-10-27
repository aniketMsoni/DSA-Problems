#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Selection Sort
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int idx = -1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                idx = j;
            }
        }
        swap(arr[i],arr[idx]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}