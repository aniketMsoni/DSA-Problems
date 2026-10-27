#include<iostream>
using namespace std;
int partition(int arr[], int si, int ei){
    int count = 0;
    int pivotElement = arr[(si+ei)/2];
    for(int i=si;i<=ei;i++){
        if((si+ei)/2==i) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pi = count + si;
    swap(arr[(si+ei)/2],arr[pi]);
    int i = si;
    int j = ei;
    while(i<pi && j>pi){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement) swap(arr[i++],arr[j--]);
    }
    return pi;
}
int kthLargest(int arr[], int n, int si, int ei, int k){
    int pi = partition(arr,si,ei);
    if(n-k==pi) return arr[pi];
    else if(n-k<pi) return kthLargest(arr,n,si,pi-1,k);
    else return kthLargest(arr,n,pi+1,ei,k);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k : ";
    cin>>k;
    cout<<kthLargest(arr,n,0,n-1,k);
}
