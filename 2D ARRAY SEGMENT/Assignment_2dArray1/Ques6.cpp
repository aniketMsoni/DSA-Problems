#include<iostream>
using namespace std;
// void show(int arr[][],int m){

// }
int main(){
    // Assuming the matrix is square and with odd dimensions
    int n;
    cout<<"Enter matrix dimension : ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int m = n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==m || i==m){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}