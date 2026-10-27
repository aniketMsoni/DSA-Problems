#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==0 && v[j]!=0) swap(v[i],v[j]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}