#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool flag = true; // array is sorted
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"The array is completely sorted...";
    else cout<<"The array is not sorted!";
    return 0;
}