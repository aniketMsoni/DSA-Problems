#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter binary array size : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x = 1;
    int sum = 0;
    for(int i=n-1;i>=0;i--){
        sum += v[i]*x;
        x *= 2;
    }
    cout<<sum;
}