// Printing the row number having the maximum sum in a given matrix
#include<iostream>
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
    int store[m];
    for(int i=0;i<m;i++){
        store[i] = 0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            store[i] += arr[i][j];
        }
    }
    int max = store[0],rowno = 0;
    for(int i=0;i<m;i++){
        if(store[i]>max){
            max = store[i];
            rowno = i;
        }
    }
    cout<<"The desired row number containing max sum : "<<rowno+1;
}