// Time Complexity -- O(n)
#include<iostream>
using namespace std;
int main(){
    int c = 10;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    for(int i=0;i<n;i+=k){
        c++;
        cout<<i<<" ";
    }
    return 0;
}