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
    cout<<"Enter array : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int trans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j] = arr[j][i];
        }
    }
    cout<<"The transposed matrix is : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}