// Check whether the given string is palindrome or not.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        str.push_back(x);
    }
    string store = str;
    reverse(str.begin(),str.end());
    if(str==store) cout<<"String is palindrome..."<<endl;
    else cout<<"Not a palindrome..."<<endl;
    return 0;
}