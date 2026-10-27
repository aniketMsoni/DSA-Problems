// Time Complexity = O(n)
#include<iostream>
#include<vector>
using namespace std;
int mountainArray(vector<int>& v){
    int n = v.size();
    int idx = -1;
    for(int i=1;i<n-1;i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            idx = i;
            break; 
        }
    }
    return idx;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Peak of Mountain Array is at index : "<<mountainArray(v);
    return 0;
}