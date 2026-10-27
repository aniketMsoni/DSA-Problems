// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x : ";
    cin>>x;  
    int lo = 0;
    int hi = x;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid*mid==x){
            cout<<"Yes,It a perfect square!";
            flag = true;
            break;
        }
        else if(mid*mid<x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag == false) cout<<"No, It's not a perfect square!!!";
    return 0;
}