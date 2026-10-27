// Time Complexity -- O(n)
#include<iostream>
using namespace std;
int main(){
    int c = 10;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        c+=i;
        cout<<i<<" ";
    }
    return 0;
}