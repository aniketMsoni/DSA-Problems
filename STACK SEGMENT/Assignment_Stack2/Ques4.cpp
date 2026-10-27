// Leetcode 503 -- Next Greater Element II
// Leetcode 20 -- Valid Parentheis
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextGreaterElements(vector<int>& nums) {
    // Cyclic array ko mimic karne ke liye 2*n size ka array banao with nums repeating in 2 halves
    int n = nums.size();
    vector<int> a(2*n,-1);
    stack<int> st;
    for(int i=0;i<2*n-1;i++){
        a[i] = nums[i%n];
    }
    // ans banao jo cyclic order main next greatest store karega but 0 to n-1 tak
    vector<int> ans(2*n,-1);
    for(int i=2*n-1;i>=0;i--){
        while(st.size()>0 && st.top()<=a[i]) st.pop();
        if(st.size()>0 && st.top()>a[i]) ans[i] = st.top();
        else ans[i] = -1;
        st.push(a[i]);
    }
    for(int i=0;i<n;i++) nums[i] = ans[i];
    return nums;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = nextGreaterElements(arr);
    for(int ele : result) cout<<ele<<" ";
}