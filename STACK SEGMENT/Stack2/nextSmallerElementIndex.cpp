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
    int nsi[n];
    stack<int> st;
    nsi[n-1] = 6;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
        if(st.size()==0) nsi[i] = n;
        else nsi[i] = st.top();
        st.push(i);
    }
    for(int ele : nsi) cout<<ele<<" ";
}