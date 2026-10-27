#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& v,int i,int j){
    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    return;
}
void nextPermutation(vector<int>& v){
    int idx = -1;
    for(int i=v.size()-2;i>=0;i++){
        if(v[i]>v[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        reverse(v,0,v.size()-1);
    }
    else{
        reverse(v,idx+1,v.size());
        int j = -1;
        for(int i=idx+1;i<v.size();i++){
            if(v[j]<v[i]){
                j = i;
                break;
            }
        swap(v[idx],v[j]);
        }
    }    
    return;
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    return;
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
    display(v);
    nextPermutation(v);
    display(v);
    return 0;
}