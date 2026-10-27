#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pse[n];
    stack<int> st;
    pse[0] = -1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()>=arr[i]) st.pop();
        if(st.size()==0) pse[i] = -1;
        else pse[i] = st.top();
        st.push(arr[i]);
    }
    for(int ele : pse) cout<<ele<<" ";
}