#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // 2 -3 4 4 -7 -1 4 -2 6
    int k;
    cout<<"Enter k : ";
    cin>>k;
    vector<int> ans(n-k+1);
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                ans[i] = arr[j];
                break;
            }
        }
    }
    for(auto ele : ans) cout<<ele<<" ";
}