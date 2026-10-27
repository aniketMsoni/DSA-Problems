#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target : ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]>target){
            cout<<"The Lower Bound of target is : "<<arr[i-1]<<endl;
            cout<<"The Upper Bound of target is : "<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}