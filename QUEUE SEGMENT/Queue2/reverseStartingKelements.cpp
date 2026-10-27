#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseFirstKElements(queue<int>& q, int k){
    stack<int> st;
    int n = q.size();
    for(int i=1;i<=k;i++){
        int x = q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()>0){
        int x = st.top();
        q.push(x);
        st.pop();
    }
    for(int i=1;i<=n-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    return;
}
void display(queue<int>& q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    int k;
    cout<<"Enter k : ";
    cin>>k;
    reverseFirstKElements(q,k);
    display(q);
}