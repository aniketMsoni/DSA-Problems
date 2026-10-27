// Searching target in 2D matrix using binary search
// Time complexity -- O(log(m*n))
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter m : ";
    cin>>m;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[m][n];
    // input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<"Enter x : ";
    cin>>x;
    // search
    int lo = 0;
    int hi = m*n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid/n][mid%n]==x){
            flag = true;
            break;
        }
        else if(arr[mid/n][mid%n]>x) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag == false) cout<<"Absent";
    else cout<<"Present";
}
