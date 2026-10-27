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
    int ans = 0;
    int maxElement = INT_MIN;
    int count = 0;
    for(int i=0;i<n;i++){
        if(maxElement<arr[i]){
            maxElement = arr[i];
            count = 1;
        }
        else if(arr[i]==maxElement) count++;
        ans = max(ans,count);
    }
    cout<<ans;
    return 0;
}