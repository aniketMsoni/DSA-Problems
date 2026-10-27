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
    //int max = arr[0];
    int max = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }
    int secmax = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && secmax<arr[i]){
            secmax = arr[i];
        }
    }
    cout<<"1st largest element in the array is : "<<max<<endl;
    cout<<"2nd largest element in the array is : "<<secmax;
}