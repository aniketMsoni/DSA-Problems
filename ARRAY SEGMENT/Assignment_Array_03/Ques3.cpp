//Find the first non-repeating element in the array
#include<iostream>
#include<vector>
using namespace std;
void findnonRepeater(vector<int> v){
    bool flag = false; // tells us that unique elements doesn't exist in array
    int n = v.size();
    int store = 0;
    for(int i=0;i<n;i++){
        store = v[i];
        int j = 0;
        for(j=0;j<n;j++){
            if(i != j && store==v[j]) break;
        }
        if(j==n){
            cout<<v[i]<<" is the first non-repeating element";
            flag = true;
            break;
        }
    }
    if(!flag) cout<<"Repeating elements doesn't exist in the array";
}
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
    findnonRepeater(v);
}