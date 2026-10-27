// Add elements of two array and store them in one of the existing array
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row number : ";
    cin>>m;
    int n;
    cout<<"Enter column number : ";
    cin>>n;
    int arr1[m][n];
    int arr2[m][n];
    cout<<"Enter array 1 : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter array 2 : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<endl<<"The resultant matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr1[i][j] += arr2[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}