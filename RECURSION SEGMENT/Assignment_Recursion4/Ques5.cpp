// Converting decimal number to binary 
#include<iostream>
using namespace std;
void decToBinary(int n, string& ans){
    if(n==0){
        ans += '0';
        return;
    }
    if(n==1){
        ans += '1';
        return;
    }
    int temp = n%2;
    decToBinary(n/2,ans);
    ans += to_string(temp);
}
int main(){
    int n;
    cout<<"Enter decimal no : ";
    cin>>n;
    string ans = "";
    decToBinary(n,ans);
    cout<<ans;
}