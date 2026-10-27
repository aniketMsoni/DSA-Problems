#include<iostream>
#include<cmath>
using namespace std;
int greatestDivisor(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return n/i;
    }
    return 1;
}
bool isPrime(int n){
    if(n==1 || n==0) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int minSteps(int n) {
    int count = 0;
    while(n>1){ // O(logn)
        if(isPrime(n)){ // O(sqrt(n))
            count += n;
            break;
        }
        int hf = greatestDivisor(n); // // O(sqrt(n))
        count += (n/hf);
        n = hf;
    }
    return count;
}
int main(){
    
    return 0;
}