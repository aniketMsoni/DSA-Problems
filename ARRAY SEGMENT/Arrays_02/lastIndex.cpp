#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);

    int x,idx = -1;
    cout<<"Enter the last whose last occurence is required : ";
    cin>>x;
    // 1st method
    // for(int i=0;i<v.size();i++){
    //     if(x==v[i]) idx = i;
    // }
    // 2nd method
    for(int i=v.size()-1;i>=0;i--){
        if(x==v[i]){
            idx = i;
            break;
        }
    }
    if(idx == -1) cout<<"Element doesn't exist in the array...";
    else cout<<"Last occurence of "<<x<<" is at index : "<<idx; 
}