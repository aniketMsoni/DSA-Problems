#include<iostream>
#include<vector>
using namespace std;
void combinationSum(vector<int> v, int arr[], int n, int target, int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(n<0) return;
    for(int i=idx;i<n;i++){
        if(arr[i]<=target){
            v.push_back(arr[i]);
            combinationSum(v,arr,n,target-arr[i],i);
            v.pop_back();
        }
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
    int tgt;
    cout<<"Enter target : ";
    cin>>tgt;
    vector<int> v;
    combinationSum(v,arr,n,tgt,0);
    return 0;
}