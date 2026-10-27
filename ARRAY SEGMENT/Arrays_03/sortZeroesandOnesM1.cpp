#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int> &v){
    int noo = 0;
    int noz = 0;
    int n = v.size();
    // 1st pass -> calculating no of zeroes and ones
    for(int i=0;i<n;i++){
        if(v.at(i) == 0) noz++;
        else noo++;
    }
    // 2nd pass -> overwriting or filling
    for(int i=0;i<n;i++){
        if(i<noz) v.at(i) = 0;
        else v.at(i) = 1;
    }
    return;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    
    cout<<"Enter 0's and 1's in the array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}