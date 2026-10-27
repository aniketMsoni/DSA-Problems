// Sort the array in descending order using Bubble Sort
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

    //Bubble sort in decreasing order
    for(int i=0;i<n-1;i++){ // n-1 passes
        // traverse
        bool flag = true; // no swap happen
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true){ // swap actually didn't happened
            break;
        }
    }

    cout<<"Array after sorted in decreasing order will look like : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}