#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    // Method 2 : binary search
    int n = nums.size();
    int m = queries.size();
    vector<int> ans(m);
    sort(nums.begin(),nums.end()); 
    for(int i=1;i<n;i++){
        nums[i] += nums[i-1];
    }
    for(int i=0;i<m;i++){
        int maxLen = 0;
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]>queries[i]) hi = mid - 1;
            else{ // nums[mid] <= queries[i]
                maxLen = mid + 1;
                lo = mid + 1;
            }
        }
        ans[i] = maxLen;
    }
    return ans; 
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int m;
    cout<<"Enter m : ";
    cin>>m;
    vector<int> queries(m);
    for(int i=0;i<m;i++){
        cin>>queries[i];
    }
    vector<int> ans = answerQueries(nums,queries);
    for(auto ele : ans){
        cout<<ele<<" ";
    }
}