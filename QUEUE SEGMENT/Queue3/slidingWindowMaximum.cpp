#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    if(k==1) return nums;
    int n = nums.size();
    vector<int> ans; // i should be min k-1
    deque<int> dq; // decreasing order of ele (index)
    for(int i=0;i<n;i++){
        while(dq.size()>0 && nums[i]>nums[dq.back()]) dq.pop_back();
        dq.push_back(i);
        int j = i - k + 1;
        while(dq.front()<j) dq.pop_front();
        if(i>=k-1) ans.push_back(nums[dq.front()]);
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
    vector<int> ans = maxSlidingWindow(arr, k);
    for(int ele : ans) cout<<ele<<" ";
    return 0;
}