#include<iostream>
using namespace std;
int main(){
    int arr[4][2];
    cout<<"Enter roll no and marks respectively :- \n";
    for(int i=0;i<4;i++){
        cout<<"Student "<<i+1<<" roll no and marks : ";
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            if(j%2==0) cout<<"Roll no : "<<arr[i][j]<<" and ";
            else cout<<"Marks : "<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}