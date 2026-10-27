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
    int psi[n];
    stack<int> st;
    psi[0] = -1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
        if(st.size()==0) psi[i] = -1;
        else psi[i] = st.top();
        st.push(i);
    } 
    for(int ele : psi) cout<<ele<<" ";
}