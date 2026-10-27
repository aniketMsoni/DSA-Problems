// Rotating the matrix by 90 degrees anti-clockwise
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row no : ";
    cin>>m;
    int n;
    cout<<"Enter column no : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        int j = 0;
        int k = n - 1;
        while(j<=k){
            int temp;
            temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}