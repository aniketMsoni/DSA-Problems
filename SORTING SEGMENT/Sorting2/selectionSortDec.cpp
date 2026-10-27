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
    for(int i=0;i<n-1;i++){
        int max = INT_MIN;
        int midx = -1;
        for(int j=i;j<n;j++){
            if(max<arr[j]){
                max = arr[j];
                midx = j;
            }
        }
        swap(arr[i],arr[midx]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}
