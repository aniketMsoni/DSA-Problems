#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;
    return 0;
}