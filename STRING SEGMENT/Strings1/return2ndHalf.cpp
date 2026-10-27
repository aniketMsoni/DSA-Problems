#include<iostream>
using namespace std;
int main(){
    string s;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n%2!=0) return 0;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        s.push_back(x);
    }
    string s1 = s.substr(n/2);
    cout<<s1;
}