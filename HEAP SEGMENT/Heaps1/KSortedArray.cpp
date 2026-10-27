#include<iostream>
#include<queue>
using namespace std;
int main(){
    vector<int> v = {6,5,3,2,8,10,9};
    for(int ele : v) cout<<ele<<" ";
    int k = 3;
    int idx = 0;
    priority_queue< int, vector<int>, greater<int> > pq;
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
        if(pq.size()>k){
            v[idx++] = pq.top();
            pq.pop();
        }
    }
    while(pq.size() > 0){
        v[idx++] = pq.top();
        pq.pop();
    }
    cout<<endl;
    for(int ele : v) cout<<ele<<" ";
}