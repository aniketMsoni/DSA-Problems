#include<iostream>
using namespace std;
int kthGrammer(int n, int k){
    if(n==1) return 0;
    if(k%2==0){
        int prevAns = kthGrammer(n-1,k/2);
        if(prevAns==0) return 1;
        else return 0;
    }
    else return kthGrammer(n-1,k/2+1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    cout<<kthGrammer(n,k);
}