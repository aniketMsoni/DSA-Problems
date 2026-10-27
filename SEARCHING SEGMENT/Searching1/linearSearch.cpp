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
    int target;
    cout<<"Enter target : ";
    cin>>target;
    bool flag = false;
    int idx = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag==false) cout<<"Target not found";
    else cout<<"Target found and it's at index - "<<idx;
    return 0;
}