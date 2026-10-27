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
    cout<<"Enter array elements : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}