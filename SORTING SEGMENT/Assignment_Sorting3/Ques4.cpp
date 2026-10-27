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
    int count = 0;
    for(int i=0;i<n-1;i++){
        int store = -1;
        if(arr[i]>arr[i+1]){
            store = arr[i];
            count++;
        }
        for(int j=i;j<n;j++){
            if(arr[j]==store){
                arr[j] = 0;
            }
        }
    }
    cout<<"Minimum operations required to sort are : "<<count;
    return 0;
}