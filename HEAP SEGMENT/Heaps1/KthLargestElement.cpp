#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue< int, vector<int>, greater<int> > pq;
    vector<int> arr = {10,20,-4,6,18,2,105,118};

    int k;
    cout<<"Enter k : ";
    cin>>k;
    
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl;
}