#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row number and column number respectively : ";
    cin>>m>>n;
    cout<<"Enter array elements : ";
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of all elements of an 2-d Array : "<<sum;
}