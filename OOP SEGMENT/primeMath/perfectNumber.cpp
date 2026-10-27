#include<iostream>
#include<cmath>
using namespace std;
bool checkPerfectNumber(int num) {
    if(num==1) return false;
    int sum = 1;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            sum += i;
            if(i!=sqrt(num)) sum += num/i;
        }
    }
    return sum == num;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<checkPerfectNumber(n);
    return 0;
}