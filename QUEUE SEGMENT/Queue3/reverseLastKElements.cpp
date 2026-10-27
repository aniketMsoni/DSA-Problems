#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int> reverseLastK(queue<int>& q, int k){
    int n = q.size();
    for(int i=0;i<n-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    stack<int> st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    return q;
}
void display(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    int k;
    cout<<"Enter k : ";
    cin>>k;
    display(q);
    q = reverseLastK(q,k);
    display(q);
    return 0;
}