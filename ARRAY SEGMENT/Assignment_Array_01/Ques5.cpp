// To find the minimum missing positive element in an sorted array containing only positive numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x = 1;
    bool flag = false; // false means elements present
    for(int j=0;j<=n-1;j++){
        if(x==arr[j]) ;
        else{
            flag = true;
            break;
        }
        x++;
    }
    cout<<x<<" is absent.";
}