#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row number : ";
    cin>>m;
    int n;
    cout<<"Enter column number : ";
    cin>>n;
    int a[m][n],b[m][n];
    cout<<"Enter array 1 : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter array 2 : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j] += a[i][j];
        }
    }
    cout<<"The resultant matrix  : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}