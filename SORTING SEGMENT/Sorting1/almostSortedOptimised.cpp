#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bool flag = true;
    // actual index mainstream method
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[j]>arr[i]){
                count++;
            }
        }
        int aidx = n - count - 1;
        int diff = aidx - i;
        if(diff<0) diff = -diff;
        if(diff>1){
            flag = false;
            break;
        }
    }

    
    // actual index alternate method
    // for(int i=0;i<n;i++){
    //     int count = 0;
    //     for(int j=0;j<n;j++){
    //         if(i==j) continue;
    //         if(arr[j]>arr[i]) count++;
    //     }
    //     int aidx = n - count - 1;
    //     if(aidx==0){
    //         if(arr[i]!=arr[aidx] && arr[i]!=arr[aidx+1]){
    //             flag = false;
    //             break;
    //         }
    //     }
    //     else if(aidx==n-1){
    //         if(arr[i]!=arr[aidx] && arr[i]!=arr[aidx-1]){
    //             flag = false;
    //             break; 
    //         }
    //     }
    //     else{
    //         if(arr[i]!=arr[aidx] && arr[i]!=arr[aidx+1] && arr[i]!=arr[aidx-1]){
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    cout<<flag;
    return 0;
}
