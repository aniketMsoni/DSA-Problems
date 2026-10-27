// Finding the largest element of a given 2D array of integers
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter row number : ";
    cin>>m;
    int n;
    cout<<"Enter column number : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the array : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max) max = arr[i][j];
        }
    }
    cout<<"The Largest element is : "<<max;

}