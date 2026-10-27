#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> pre(n);
    // Prefix product array
    int p = 1;
    for(int i=0;i<n;i++){
        pre[i] = p;
        p *= nums[i];
    }
    // Suffix product array
    p = nums[n-1];
    for(int i=n-2;i>=0;i--){
        pre[i] *= p;
        p *= nums[i];
    }
    return pre;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = productExceptSelf(arr);
    for(auto ele : ans){
        cout<<ele<<" ";
    }
}