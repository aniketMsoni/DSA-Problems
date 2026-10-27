// Input a string of even length and reverse the second half of the string
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n%2!=0){
        cout<<"String is not of even length...";
        return 0;
    }
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        str.push_back(x);
    }
    reverse(str.begin()+n/2,str.end());
    cout<<"Reversed 2nd part of the string is : "<<str<<endl;
    return 0;
}