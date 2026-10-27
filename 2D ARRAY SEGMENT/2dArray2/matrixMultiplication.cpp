#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter rows and columns for array 1 respectively : ";
    cin>>a>>b;
    int c,d;
    cout<<"Enter rows and columns for array 2 respectively : ";
    cin>>c>>d;
    if(b!=c) exit(1);
    int arr1[a][b],arr2[c][d];
    // Taking both arrays as input
    cout<<"Enter array 1 : \n";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter array 2 : \n";
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cin>>arr2[i][j];
        }
    }
    // Matrix Multiplication Operation
    int res[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            res[i][j] = 0;
            for(int k=0;k<b;k++){
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    //Printing the output
    cout<<"The resultant matrix : \n";
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}