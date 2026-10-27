#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    vector<int> pre(n);
    pre[0] = 0;
    int sum = 0;
    for(int i=0;i<n-1;i++){
        sum += nums[i];
        pre[i+1] = sum;
    }
    vector<int> suf(n);
    suf[n-1] = 0;
    sum = 0;
    for(int i=n-1;i>0;i--){
        sum += nums[i];
        suf[i-1] = sum;
    }
    for(int i=0;i<n;i++){
        if(suf[i]==pre[i]) return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Pivot Index is : "<<pivotIndex(nums);
}