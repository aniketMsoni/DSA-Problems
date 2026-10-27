#include<iostream>
#include<vector>
using namespace std;
void printSubset(int arr[], int n, int idx, vector<int> v, int k){
    if(idx==n){
        if(v.size()==k){
            for(int i=0;i<k;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    printSubset(arr,n,idx+1,v,k);
    v.push_back(arr[idx]);
    printSubset(arr,n,idx+1,v,k);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    printSubset(arr,size,0,v,k);
}