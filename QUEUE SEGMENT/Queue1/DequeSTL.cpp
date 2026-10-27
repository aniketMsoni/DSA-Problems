#include<iostream>
#include<deque>
using namespace std;
void display(deque<int>& dq){
    int n = dq.size();
    for(int i=1;i<=n;i++){
        int x = dq.front();
        cout<<x<<" ";
        dq.pop_front();
        dq.push_back(x);
    }
    cout<<endl;
}
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_front(5);
    display(dq);
    dq.pop_back();
    dq.pop_back();
    display(dq);
    return 0;
}