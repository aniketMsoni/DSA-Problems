#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;

    // Using a stack -- pop, ans, push
    int pgi[n];
    stack<int> st;
    pgi[0] = 1;
    st.push(0);
    for(int i=1;i<n;i++){
        // pop all the elements less or equal to arr[i]
        while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
        // mark the answer in next greater element array
        if(st.size()==0) pgi[i] = -1;
        else pgi[i] = st.top();
        pgi[i] = i - pgi[i];
        // push the arr[i] for next cycle
        st.push(i);
    }
    for(int ele : pgi) cout<<ele<<" ";
}