#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    stack<int> st;
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
    int s;
    cout<<"Enter size of queue(even) : ";
    cin>>s;
    queue<int> q;
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    display(q);
    stack<int> st;
    int n = q.size();
    // Step 1 -> reverse first half and put in back in queue
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    // Step 2 -> put second half in stack
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // Step 3 -> push st top and q front in queue and pop from both of them
    while(st.size()>0){
        q.push(st.top());
        q.push(q.front());
        st.pop();
        q.pop();
    }
    // Step 4 -> reverse queue
    for(int i=1;i<=n;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    display(q);
}