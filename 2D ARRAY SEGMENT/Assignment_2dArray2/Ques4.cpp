// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter matrix dimension : ";
    cin>>n;
    int arr[n][n];
    
    int maxr = n-1;
    int minr = 0;
    int maxc = n-1;
    int minc = 0;
    int arr1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr1[i][j] = 0;
        }
    }
    int count = 1;
    while(maxr>=minr && maxc>=minc){
        for(int i=minc;i<=maxc;i++){
            arr1[minr][i] = count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            arr1[i][maxc] = count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){
            arr1[maxr][i] = count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            arr1[i][minc] = count++;
        }
        minc++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}