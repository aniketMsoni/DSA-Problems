#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    int sum = 0;
    if(a%2!=0) sum += a;
    if(b%2!=0) sum +=b;
    for(int i=(min(a,b)+1);i<max(a,b);i++){
        if(i%2!=0){
            sum += i;
            i++;
        }
    }
    cout<<sum;
}