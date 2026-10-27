#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void reverseNum(int n, int &ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    int ld = n % 10;
    ans = ans*10 + ld;
    reverseNum(n/10,ans);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ans = 0;
    reverseNum(n,ans);    
}