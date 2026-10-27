#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k : ";
    cin>>k;
    int maxSum = INT_MIN;
    int idx = 0;
    int sum = 0;
    for(int i=0;i<k;i++){
        sum += arr[i];
    }    
    maxSum = sum;
    // Sliding window algorithm 
    int i = 1;
    int j = k;
    while(j<n){
        sum = sum + arr[j] - arr[i-1];
        if(sum>maxSum){
            maxSum = sum;
            idx = i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<" "<<idx; // TC = O(k*n)
    return 0;
}