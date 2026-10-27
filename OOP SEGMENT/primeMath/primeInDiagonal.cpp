#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int m;
    cout<<"Enter m : ";
    cin>>m;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[m][n];
    int maxPrime = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        if(isPrime(arr[i][i])) maxPrime = max(maxPrime,arr[i][i]); 
        if(isPrime(arr[i][m - i - 1])) maxPrime = max(maxPrime,arr[i][m - i - 1]); 
    }
    cout<<maxPrime;
    return 0;
}