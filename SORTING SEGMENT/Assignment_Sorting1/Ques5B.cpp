// Checking whether the given array is almost sorted or not
#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = true;
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
    cout<<flag;
}