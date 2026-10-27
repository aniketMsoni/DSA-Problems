// Time Complexity -- O(n*logn)
#include<iostream>
using namespace std;
int main(){
    int c = 0;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1;i<n;i*=2){
        for(int j=n;j>i;j--){
            c++;
        }
    }
    return 0;
}