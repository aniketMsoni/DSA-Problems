#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr,int n){
    if(n==arr.size()) return;
    print(arr,n+1);
    cout<<arr[n]<<" ";
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,0);
    return 0;
}