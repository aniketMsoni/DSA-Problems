// Find the minimum element in the array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter the elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int min = INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<"Minimum element : "<<min;
}