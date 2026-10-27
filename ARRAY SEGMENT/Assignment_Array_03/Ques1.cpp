//Counting the number of triplets whose sum is equal to the given value x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int target;
    cout<<"Enter target : ";
    cin>>target;

    int store=0,store1=0,count=0;
    for(int i=0;i<n-2;i++){
        store = v[i];
        for(int j=i+1;j<n-1;j++){
            store1 = v[j];
            for(int k=j+1;k<n;k++){
                if((v[k]+store1+store)==target){
                    count++;
                    cout<<"("<<i<<","<<j<<","<<k<<")";
                    cout<<endl;
                }
            }
        }
    }
    cout<<"No of triplets are : "<<count;
}