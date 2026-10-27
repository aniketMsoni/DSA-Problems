#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
        int noz=0,noo=0,n0t=0;
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)==0) noz++;
            else if(nums.at(i)==1) noo++;
            else if(nums.at(i)==2) n0t++;
        }
        for(int i=0;i<nums.size();i++){
            if(i<noz) nums.at(i)=0;
            else if(i<noz+noo) nums.at(i)=1;
            else nums.at(i)=2;
        }
        return;
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    sortColors(v);
    display(v);
}