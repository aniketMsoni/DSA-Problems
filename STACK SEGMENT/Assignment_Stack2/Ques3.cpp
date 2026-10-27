// Leetcode 20 -- Valid Parentheis
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    vector<int> nge(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(st.size()>0 && st.top()>prices[i]) st.pop();
        if(st.size()==0) nge[i] = prices[i];
        else nge[i] = prices[i] - st.top();
        st.push(prices[i]);
    }
    return nge;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = finalPrices(arr);
    for(int ele : result) cout<<ele<<" ";
}