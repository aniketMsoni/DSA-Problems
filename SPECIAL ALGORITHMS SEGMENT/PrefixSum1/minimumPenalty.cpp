#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int bestClosingTime(string customers) {
    int n = customers.length();
    vector<int> pre(n+1);
    vector<int> suf(n+1);
    pre[0] = 0;
    int Ncount = 0;
    for(int i=0;i<n;i++){
        if(customers[i]=='N') Ncount++;
        pre[i+1] = Ncount;
    }
    suf[n-1] = 0;
    int Ycount = 0;
    for(int i=n-1;i>=0;i--){
        if(customers[i]=='Y') Ycount++;
        suf[i] = Ycount;
    }
    int min1 = INT_MAX;
    for(int i=0;i<pre.size();i++){
        pre[i] += suf[i];
        min1 = min(pre[i],min1);
    }
    for(int i=0;i<=n;i++){
        if(pre[i]==min1) return i;
    }
    return 100;
}
int main(){
    string s;
    cout<<"Enter Y and N string : ";
    cin>>s;
    cout<<bestClosingTime(s);
}