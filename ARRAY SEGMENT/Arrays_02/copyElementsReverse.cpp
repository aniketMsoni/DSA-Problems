#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int> V(v.size());
    for(int i=0;i<=v.size()-1;i++){
        V[i] = v[v.size() - 1 - i];
    }
    for(int i=0;i<=v.size()-1;i++){
        cout<<V[i]<<" ";
    }
}