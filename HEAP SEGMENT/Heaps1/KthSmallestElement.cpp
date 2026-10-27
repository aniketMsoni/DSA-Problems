#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq; // max heap
    int arr[] = {10,2,-4,5,18,24,1,-7,56};
    int n = sizeof(arr)/4;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size() > k) pq.pop();
    }
    cout<<pq.top()<<endl;
}