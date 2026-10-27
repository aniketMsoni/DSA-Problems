#include<iostream>
using namespace std;
void greet(int n){
    if(n==0) return;
    cout<<"Good Morning!"<<endl;
    greet(n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    greet(n);
    return 0;
}