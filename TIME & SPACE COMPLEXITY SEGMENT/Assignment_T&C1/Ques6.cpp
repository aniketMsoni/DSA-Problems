// Time Complexity -- O(n^2)
#include<iostream>
using namespace std;
int main(){
    int c = 10;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            c++;
            cout<<i<<" ";
        }
    }
    return 0;
}