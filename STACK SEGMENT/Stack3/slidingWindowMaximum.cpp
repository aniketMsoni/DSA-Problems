#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    int n = arr.size();
    int ngi[n];
    stack<int> st;
    st.push(n-1);
    ngi[n-1] = n;
    for(int i=n-2;i>=0;i--){
        while(st.size() && arr[st.top()]<=arr[i]) st.pop();
        if(st.size()==0) ngi[i] = n;
        else ngi[i] = st.top();
        st.push(i);
    }
    // Main work
    vector<int> ans;
    int j = 0;
    for(int i=0;i<n-k+1;i++){
        if(j<i) j = i;
        int mx = arr[j];
        while(j < i+k){
            mx = arr[j];
            if(ngi[j]>=i+k) break;
            j = ngi[j];
        }
        ans.push_back(mx);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k : ";
    cin>>k;
    vector<int> result = maxSlidingWindow(arr, k);
    for(int ele : result) cout<<ele<<" ";
    return 0;
}