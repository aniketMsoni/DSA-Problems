#include<iostream>
using namespace std;
int main(){
    int arr[6] = {5,6,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Bubble Sort
    for(int i=0;i<n-1;i++){ // n-1 passes
        // traverse
        for(int j=0;j<n-1-i;j++){ // j<n-1 is unoptimising the code
            if(arr[j]>arr[j+1]){
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}