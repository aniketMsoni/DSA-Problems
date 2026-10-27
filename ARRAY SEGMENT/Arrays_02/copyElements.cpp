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

    vector<int> V(n);
    for(int i=0;i<n;i++){
        V[i] = v[i];
    }
    for(int i=0;i<n;i++){
        cout<<V.at(i)<<" ";
    }
}