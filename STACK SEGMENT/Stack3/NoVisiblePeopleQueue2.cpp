#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> canSeePersonsCount(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;
    st.push(arr[n-1]);
    vector<int> result(n,0);
    result[n-1] = 0;
    for(int i=n-2;i>=0;i--){
        int count = 0;
        while(st.size() && arr[i]>st.top()){
            st.pop();
            count++;
        }
        if(st.size()!=0) count++;
        result[i] = count;
        st.push(arr[i]);
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = canSeePersonsCount(arr);
    for(int ele : result) cout<<ele<<" ";
    return 0;
}