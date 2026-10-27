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
    cout<<str<<endl;
    reverse(str.begin()+1,str.begin()+5);
    cout<<str<<endl;
}