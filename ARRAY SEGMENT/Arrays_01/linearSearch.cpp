#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter the elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search : ";
    cin>>x;
    //search
    //check mark
    bool flag = false; // Initially, bool is false which means that element is not present
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag == true) cout<<"Element is present";
    else cout<<"404 ELEMENT NOT FOUND";
    return 0;
}