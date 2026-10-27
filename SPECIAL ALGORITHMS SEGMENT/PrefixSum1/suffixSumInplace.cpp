#include<iostream>
#include<vector>
using namespace std;
void suffixSum(vector<int>& nums){
    int n = nums.size();
    for(int i=n-2;i>=0;i--){
        nums[i] = nums[i] + nums[i+1];
    }
    return;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    suffixSum(arr);
    for(auto ele : arr){
        cout<<ele<<" ";
    }
}