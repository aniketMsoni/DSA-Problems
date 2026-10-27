#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int minLen = INT_MAX;
    int len;
    int sum = 0;
    int i = 0;
    int j = 0;
    while(j<n){
        sum += nums[j];
        while(sum>=target){
            len = j-i+1;
            minLen = min(minLen,len);
            sum -= nums[i];
            i++;
        }
        j++;
    }
    if(minLen!=INT_MAX) return minLen;
    else return 0;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tgt;
    cout<<"Enter target : ";
    cin>>tgt;
    cout<<minSubArrayLen(tgt,arr);
}