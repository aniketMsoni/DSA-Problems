#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    int tgt;
    cout<<"Enter target : ";
    cin>>tgt; 
    for(int i=0;i<n;i++){
        int p = 1;
        for(int j=i;j<n;j++){
            p *= arr[j];
            if(p<tgt) count++;
            else break;
        }
    }
    cout<<count;
}