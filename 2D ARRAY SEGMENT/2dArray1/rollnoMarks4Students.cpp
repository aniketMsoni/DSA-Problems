#include<iostream>
using namespace std;
int main(){
    // row denotes roll number
    // column denotes marks    
    int arr[2][4];
    cout<<"Enter roll no and marks respectively : "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }  
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}