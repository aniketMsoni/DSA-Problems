#include<iostream>
#include<vector>
using namespace std;
void remove1s(vector<int>& v, int arr[], int size, int idx){
    if(idx==size){
        for(auto ele : v){
            cout<<ele<<" ";
        }
        return;
    }
    int temp = arr[idx];
    if(temp==1) remove1s(v,arr,size,idx+1);
    else{
        v.push_back(arr[idx]);
        remove1s(v,arr,size,idx+1);
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    remove1s(ans,arr,n,0);
    return 0;
}