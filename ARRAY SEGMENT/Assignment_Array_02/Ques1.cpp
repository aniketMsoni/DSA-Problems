// Counting the number of elements strictly greater than x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    //input
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int count = 0;
    int x;
    cout<<"Enter x : ";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(x<v[i]) count++;
    }
    cout<<"No of elements strictly greater than "<<x<<" is : "<<count;

}