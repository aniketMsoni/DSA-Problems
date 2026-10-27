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
        bool flag = true; // array is sorted
        // traverse
        for(int j=0;j<n-1-i;j++){ // j<n-1 is unoptimising the code
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true){ // swap didn't happen in the current pass
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}