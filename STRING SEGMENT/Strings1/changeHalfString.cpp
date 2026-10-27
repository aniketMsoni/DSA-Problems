#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "aniket";
    int n = s.length();
    cout<<s<<endl;
    reverse(s.begin(),s.begin()+(n/2));
    cout<<s;
}