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
    int pge[n];
    stack<int> st;
    pge[0] = -1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        // pop all the elements less or equal to arr[i]
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        // mark the answer in next greater element array
        if(st.size()==0) pge[i] = -1;
        else pge[i] = st.top();
        // push the arr[i] for next cycle
        st.push(arr[i]);
    }
    for(int ele : pge) cout<<ele<<" ";
}