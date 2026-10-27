// Time Complexity -- O(n*logn)
#include<iostream>
using namespace std;
int main(){
    int c = 0;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j*j<n;j*=2){
            c++;
        }
    }
    return 0;
}