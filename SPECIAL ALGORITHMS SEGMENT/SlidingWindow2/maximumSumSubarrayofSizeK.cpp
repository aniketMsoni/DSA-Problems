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
    int sumMax = INT_MIN;
    int idx = -1;
    for(int i=0;i<=n-k;i++){ // No of ops = n-k+1
        int sum = 0;
        for(int j=i;j<i+k;j++){ // total ops here = k
            sum += arr[j];
        }
        if(sumMax<sum){
            sumMax = sum;
            idx = i;
        }
    }
    // Overall no of ops = (n-k+1)*k
    cout<<sumMax<<" "<<idx; // TC = O(k*n)
    return 0;
}