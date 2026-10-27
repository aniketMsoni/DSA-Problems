// Time Complexity -- O(logn)
#include<iostream>
using namespace std;
int main(){
    int c = 10;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=n;i>0;i/=2){
        c++;
        cout<<i<<" ";
    }
    return 0;
}