#include<iostream>
#include<vector>
using namespace std;
void printCombination(vector<int> arr1, vector<int> arr2, vector<int>& v, int i, int j, bool flag){
    if(flag){ // flag is true refers to new number is being selected from arr1 now
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
    if(flag){ // arr1 is nikalna hai
        for(int k=0;k<arr1.size();k++){
            if(v.size()==0){
                v.push_back(arr1[i]);
                printCombination(arr1,arr2,v,k+1,j,!flag);
            }
            else{
                if(arr1[k]>v.back()){

                }
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter m : ";
    cin>>m;
    vector<int> arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> v;
    printCombination(arr1,arr2,v,0,0,true);
}