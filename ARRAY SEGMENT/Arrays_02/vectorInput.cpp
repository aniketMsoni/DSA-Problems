#include<iostream>
#include<vector>        
using namespace std;
int main(){
    vector<int> v;
    // Programmer's input
    // cout<<"Enter vector/array elements : ";
    // for(int i=0;i<v.size();i++){
    //     cin>>v[i];
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    // User's input
    int n;
    cout<<"Enter the no of elements you want : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}