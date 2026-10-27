// Given an array of digits, find minimum possible sum of two numbers formed from considering all the digits of the given array
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
    // sorting the given array using insertion sort
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    // changing sorted array into an integer which is our minium number 
    int sum = 0;
    for(int i=0;i<n;i++){
        sum *= 10;
        sum += arr[i];
    }
    // changing sorted array to get 2nd min number
    for(int i=n-1;i>0;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    // changing new array into an integer which is our 2nd minimum number 
    int sum1 = 0;
    for(int i=0;i<n;i++){
        sum1 *= 10;
        sum1 += arr[i];
    }
    cout<<"Minimum sum : "<<sum+sum1<<endl;
    return 0;
}