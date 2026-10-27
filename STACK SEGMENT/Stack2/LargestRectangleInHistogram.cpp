#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largestRectangleArea(vector<int>& arr) {
    // next smaller element ke index ka array banao
    int n = arr.size();
    int nsi[n];
    stack<int> st;
    nsi[n-1] = n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
        if(st.size()==0) nsi[i] = n;
        else nsi[i] = st.top();
        st.push(i);
    }
    // previous smaller element ke index ka array banao
    int psi[n];
    stack<int> tt;
    psi[0] = -1;
    tt.push(0);
    for(int i=1;i<n;i++){
        while(tt.size()>0 && arr[tt.top()]>=arr[i]) tt.pop();
        if(tt.size()==0) psi[i] = -1;
        else psi[i] = tt.top();
        tt.push(i);
    }
    // maxArea calculate karlo which is bar value * width
    // width = nsi - psi - 1
    int maxArea = 0;
    for(int i=0;i<n;i++){
        int temp = nsi[i] - psi[i] - 1;
        maxArea = max(maxArea, arr[i]*temp);
    }
    return maxArea;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestRectangleArea(arr)<<endl;
}