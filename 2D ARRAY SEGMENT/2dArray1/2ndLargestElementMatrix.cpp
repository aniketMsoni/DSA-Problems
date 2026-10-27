#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row number and column number respectively : ";
    cin>>m>>n;
    cout<<"Enter array elements : ";
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    int smax = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((smax<arr[i][j]) && (smax!=arr[i][j])) smax = arr[i][j];
        } 
    }
    cout<<"The second maximum element in the array : "<<smax;
}