#include<iostream>
#include<vector>
using namespace std;
#include<vector>
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v.push_back(count);
            count++;
        }
    }

}