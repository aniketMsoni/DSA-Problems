#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        brr[i] = arr[i];
    }
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(brr[i]==arr[j]){
                brr[i] = j;
                break;
            }
        }
    }
    for(int ele : brr){
        cout<<ele<<" ";
    }
    return 0;
}