#include<iostream>
using namespace std;
int flipBits(int n){
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    return (n);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int x = n;
    n = flipBits(n);
    cout<<"All ones no : "<<n<<endl;
    n = x ^ n;
    cout<<"flipped no : "<<n;
}