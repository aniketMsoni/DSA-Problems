#include<iostream>
#include<vector>
using namespace std;
void printSubarrays(int arr[], vector<int> v, int n, int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printSubarrays(arr,v,n,idx+1);
    if(v.size()==0 || v[v.size()-1]==arr[idx-1]){
        v.push_back(arr[idx]);
        printSubarrays(arr,v,n,idx+1);
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = i+1;
    }
    vector<int> v;
    printSubarrays(arr,v,n,0);
}