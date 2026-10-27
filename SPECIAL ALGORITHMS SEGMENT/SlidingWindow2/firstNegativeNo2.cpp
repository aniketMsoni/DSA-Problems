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
    int idx = -1; // first negative number idx in each window
    int k;
    cout<<"Enter window size : ";
    cin>>k;
    vector<int> ans(n-k+1);
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            idx = i;
            break;
        }
    }
    if(idx==-1) ans[0] = 1;
    else ans[0] = arr[idx];
    int i = 1;
    int j = k;
    while(j<n){
        if(idx>=i) ans[i] = arr[idx];
        else{
            idx = -1;
            for(int x=i;x<=j;x++){
                if(arr[idx]<0){
                    idx = x;
                    break;
                }
            }
            if(idx!=-1) ans[i] = arr[idx];
            else ans[i] = 1;
        }
        i++;
        j++;
    }
    for(auto ele:ans) cout<<ele<<" ";
}