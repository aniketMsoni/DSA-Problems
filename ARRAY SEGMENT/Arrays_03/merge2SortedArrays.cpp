#include<iostream>
#include<vector>
using namespace std;
void mergeArrays(vector<int>& v1,vector<int>& v2,vector<int>& v3){
    int i=0,j=0,k=0;
    int n = v1.size(),m = v2.size();
    while(i<n && j<m){
        if(v1.at(i)<v2.at(j)){
            v3.at(k)=v1.at(i);
            i++;
            k++;
        }
        else{
            v3.at(k)=v2.at(j);
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<=n-1){
            v3.at(k) = v1.at(i);
            i++;
            k++;
        }
    }
    if(i==n){ 
        while(j<=m-1){
            v3[k] = v2[j];
            j++;
            k++;
        }
    }
}
int main(){
    vector<int> v1 = {1,4,5,8};
    cout<<"Sorted Array 1 : ";
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
    vector<int> v2 = {2,3,6,7,10};
    cout<<"Sorted Array 2 : ";
    for(int i=0;i<v2.size();i++){
        cout<<v2.at(i)<<" ";
    }
    cout<<endl;
    int range = v1.size()+v2.size();
    vector<int> v3(range);
    mergeArrays(v1,v2,v3);
    cout<<"Sorted merged array is : ";
    for(int i=0;i<v3.size();i++){
        cout<<v3.at(i)<<" ";
    }
}