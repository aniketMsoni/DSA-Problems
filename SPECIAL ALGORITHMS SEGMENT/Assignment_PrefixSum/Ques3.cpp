#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<long long> findPrefixScore(vector<int>& nums) {
    int n = nums.size();
    vector<int> conver(n);
    int max1 = INT_MIN;
    for(int i=0;i<n;i++){
        max1 = max(max1,nums[i]);
        conver[i] = nums[i] + max1;
    }
    vector<long long> ans(n);
    ans[0] = conver[0];
    for(int i=1;i<n;i++){
        ans[i] = conver[i] + ans[i-1];
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
    vector<long long> ans = findPrefixScore(arr);
    for(int ele : ans){
        cout<<ele<<" ";
    }
    return 0;
}