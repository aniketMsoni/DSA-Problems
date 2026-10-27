#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(25);
    pq.push(-8);
    pq.push(81);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}