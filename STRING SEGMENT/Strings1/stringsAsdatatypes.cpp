#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Aniket Soni";
    cout<<str; 
    cout<<endl;
    string s;
    cin>>s;
    cout<<s;

    cout<<endl;
    string str1;
    getline(cin,str1);
    cout<<str1;
    cout<<endl;
    cout<<str1[4];  
}