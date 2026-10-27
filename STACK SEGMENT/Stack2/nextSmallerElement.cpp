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
    int nse[n];
    stack<int> st;
    nse[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()>=arr[i]) st.pop();
        if(st.size()==0) nse[i] = -1;
        else nse[i] = st.top();
        st.push(arr[i]);
    }
    for(int ele : nse) cout<<ele<<" ";
}