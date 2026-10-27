#include<iostream>
#include<vector>
using namespace std;
vector<int> prefixSum(vector<int>& nums){
    int n = nums.size();
    vector<int> run(n);
    run[0] = nums[0];
    for(int i=1;i<n;i++){
        run[i] = nums[i] + run[i-1];
    }
    return run;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res = prefixSum(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}