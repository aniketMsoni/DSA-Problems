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
    // Input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // Print
    int maxr = m-1;
    int minr = 0;
    int maxc = n-1;
    int minc = 0;
    while(maxr>=minr && maxc>=minc){
        for(int i=minc;i<=maxc;i++){ // right jane wala loop
            cout<<arr[minr][i]<<" "; 
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i=minr;i<=maxr;i++){ // down jane wala loop
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxc;i>=minc;i--){ // left jane wala loop
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int i=maxr;i>=minr;i--){ // up jane wala loop
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}
