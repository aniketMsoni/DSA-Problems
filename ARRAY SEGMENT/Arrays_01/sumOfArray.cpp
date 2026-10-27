#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    int sum = 0;
    cout<<"Enter array elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of all the elements of array are : "<<sum;
    return 0;
}