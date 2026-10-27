#include<iostream>
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
    int min = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(min>arr[i][j]) min = arr[i][j];
        }
    }
    cout<<"Minimum element : "<<min;
}