#include<iostream>
#include<string>
using namespace std;
int main(){
    long long n;
    cout<<"Enter n : ";
    cin>>n;
    string s = to_string(n);
    cout<<"No of digits are : "<<s.length();
    return 0;
}    