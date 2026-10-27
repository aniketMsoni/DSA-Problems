#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void printSubset(int arr[], int n, int idx, vector<int> ans, int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-idx) < k) return; // Time Complexity better ho jayegi
    printSubset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans,k);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    printSubset(arr,n,0,v,k);
}