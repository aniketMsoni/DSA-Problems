#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter number : ";
    cin>>n;
    int count = 1;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = count;
            count++;
        }
    }
    int maxr = n-1;
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