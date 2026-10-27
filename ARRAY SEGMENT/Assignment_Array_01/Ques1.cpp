// Calculating the product of all the elements of a given array
#include<iostream>
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
    int product = 1;
    for(int i=0;i<=n-1;i++){
        product = product * arr[i];
    }
    cout<<"Product of all the elements of array is : "<<product;
}