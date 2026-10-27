// Sort the array in descending order using Bubble Sort alternate way...
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

    // Bubble sort alternate way
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=n-1;j>0+i;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}