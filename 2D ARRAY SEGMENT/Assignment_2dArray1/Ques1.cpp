// Storing 10 at every index in 2d array with 5 rows and 5 columns
#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j] = 10;
        }
    }
    cout<<"The entered array is : \n";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}