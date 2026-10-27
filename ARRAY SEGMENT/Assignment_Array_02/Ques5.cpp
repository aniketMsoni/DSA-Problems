//Changing array by changing all odd indexed elements by there second multiple and increment all even indexed elements by 10
#include<iostream>
#include<vector>
using namespace std;
void changeArray(vector<int> &v){
    for(int i=0;i<v.size();i++){
        if(i%2!=0){
            v[i] = 2 * v[i];
        }
        else{
            v[i]+=10;
        }
    }
    return;
}
void display(vector<int> x){
    for(int i=0;i<x.size();i++){
        cout<<x.at(i)<<" ";
    }
    return;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    changeArray(v);
    cout<<"Updated array is : ";
    display(v);

}