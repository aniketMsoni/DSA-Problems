#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter elements of array : ";
    for(int i=0;i<=9;i++){
        cin>>arr[i];
    }
    cout<<"Elements are : ";
    for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
    }
}