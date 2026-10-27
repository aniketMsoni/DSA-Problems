// Returning the sum of the rectangle from (l1,r1) to (l2, r2) made inside a matrix A with dimension n*n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter dimension of matrix : ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"Enter l1 and r1 respectively : ";
    cin>>l1>>r1;
    cout<<"Enter l2 and r2 respectively : ";
    cin>>l2>>r2;
    int maxr = max(l1,l2);
    int minr = min(l1,l2);
    int maxc = max(r1,r2);
    int minc = min(r1,r2);
    int sum = 0;
    for(int i=minr;i<=maxr;i++){
        for(int j=minc;j<=maxc;j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum is : "<<sum;
}