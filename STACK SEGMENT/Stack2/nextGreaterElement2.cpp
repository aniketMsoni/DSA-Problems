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
    int nge[n];
    stack<int> st;
    nge[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        // pop all the elements less or equal to arr[i]
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        // mark the answer in next greater element array
        if(st.size()==0) nge[i] = -1;
        else nge[i] = st.top();
        // push the arr[i] for next cycle
        st.push(arr[i]);
    }
    for(int ele : nge) cout<<ele<<" ";
}