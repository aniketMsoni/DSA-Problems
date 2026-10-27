// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
#include<iostream>
#include<vector>
using namespace std;
void changer(vector< vector<int> >& v,int a,int b){
    int m = v.size();
    int n = v[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==a || j==b){
                v[i][j] = 0;
            }
        }
    }
    return;
}
int main(){
    vector< vector<int> > v = {{1,1,0},{1,1,1},{1,0,1}};
    vector<int> rowidx;
    vector<int> colsidx;
    int m = v.size();
    int n = v[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==0){
                rowidx.push_back(i);
                colsidx.push_back(j);
            }
        }
    }
    for(int i=0;i<rowidx.size();i++){
        changer(v,rowidx[i],colsidx[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}