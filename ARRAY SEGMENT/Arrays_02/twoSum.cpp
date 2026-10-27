#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // douplet sum target
    int x;
    cout<<"Enter target : ";
    cin>>x;

    // size of vector
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    // input
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }

    // doublet checker and printer
    int store = 0;
    for(int i=0;i<v.size()-1;i++){
        store = v[i];
        for(int j=i+1;j<v.size();j++){
            if((store+v[j]) == x){  
            cout<<"("<<i<<","<<j<<")";
            cout<<endl;
            }
        }
    }
}