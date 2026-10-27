// Time Complexity -- O(logn)
#include<iostream>
using namespace std;
int main(){
    int c = 10;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<n;i*=2){
        c++;
        cout<<i<<" ";
    }
    return 0;
}