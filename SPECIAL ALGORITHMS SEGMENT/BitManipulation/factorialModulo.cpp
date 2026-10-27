#include<iostream>
#include<vector>
using namespace std;
vector<long long int> factorial(int n){
    vector<long long int> res(n+1,1);
    int mod = 1000000007;
    for(int i=2;i<=n;i++){
        res[i] = ((i%mod) * (res[i-1]%mod)) % mod;
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<long long int> res = factorial(n);
    for(int i=0;i<res.size();i++) cout<<i<<"!"<<" = "<<res[i]<<endl;
    return 0;
}