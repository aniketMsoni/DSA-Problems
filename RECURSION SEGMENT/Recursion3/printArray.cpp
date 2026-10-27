#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& v,int x){
    if(x==v.size()) return;
    cout<<v[x]<<" ";
    print(v,x+1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    print(v,0);
}