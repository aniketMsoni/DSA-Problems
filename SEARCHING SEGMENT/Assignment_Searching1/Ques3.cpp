// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the maximum number of 1’s.
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // Input
    int m;
    cout<<"Enter m : ";
    cin>>m;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int count = 0;
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        // Counting 1's
        int firstOcc = -1;
        int lastOcc = -1;
        int lo = 0; 
        int hi = n-1;
        int x = 1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[i][mid]==x){
                if(arr[i][mid]==0 || arr[i][mid-1]!=x){
                    firstOcc = mid;
                    break;
                }
                else{
                    hi = mid - 1;
                }
            }
            else if(arr[i][mid]>x) hi = mid - 1;
            else lo = mid + 1;
        }
        lo = 0;
        hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[i][mid]==x){
                if(arr[i][mid]==n-1 || arr[i][mid]!=arr[i][mid+1]){
                    lastOcc = mid;
                    break;
                }
                else{
                    lo = mid + 1;
                }
            }
            else if(arr[i][mid]>x){
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        count = lastOcc - firstOcc + 1;
        if(max<count) max = count;
        v.push_back(count);
    }
    for(int i=0;i<m;i++){
        if(v[i]==max){
            cout<<i<<" "<<max;

        }
    }
}