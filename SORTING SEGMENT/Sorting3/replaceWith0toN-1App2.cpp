// Negative marking and only for positive numbers or negative numbers or numbers in a particular range
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x = 0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(arr[j]<=0) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = -x;
        x++;
    }
    for(int ele : arr){
        cout<<-ele<<" ";
    }
    return 0;
}