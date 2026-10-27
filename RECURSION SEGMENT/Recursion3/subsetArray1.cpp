#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& FinalAns, int idx){
    if(idx==nums.size()){
        FinalAns.push_back(ans);
        return;
    }
    helper(nums,ans,FinalAns,idx+1);
    ans.push_back(nums[idx]);
    helper(nums,ans,FinalAns,idx+1);
}
vector<vector<int>> subsets(vector<int>& nums){
    vector<int> ans;
    vector<vector<int>> FinalAns;
    helper(nums,ans,FinalAns,0);
    return FinalAns;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>> ans =  subsets(v);
    int m = ans.size();
    for(int i=0;i<m;i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}