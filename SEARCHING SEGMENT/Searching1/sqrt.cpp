#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int lo = 0;
    int hi = n;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid*mid==n){
            cout<<mid;
            flag = true;
            break;
        }
        else if(mid*mid>n) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag==false) cout<<hi;
    return 0;
}