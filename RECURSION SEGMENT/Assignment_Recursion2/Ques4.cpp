#include<iostream>
#include<vector>
using namespace std;
void printSumTriangle(vector<int>& v){
    int n = v.size();
    if(n==0) return;
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        v[i] = v[i] + v[i+1];
    }
    v.pop_back();
    printSumTriangle(v);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> v(n,0);
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;
    printSumTriangle(v);
}