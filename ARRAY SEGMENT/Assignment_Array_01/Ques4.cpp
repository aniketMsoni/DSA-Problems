// To predict whether duplicates are present in an array or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter the elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bool flag = false; // false means no duplicates
    for(int i=0;i<=n-1;i++){
        int store = arr[i];
        for(int j=0;j<=n-1;j++){
            if(i==j) continue;
            if(store == arr[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag == true) cout<<"Duplicates are available";
    else cout<<"Duplicates are not available";
}