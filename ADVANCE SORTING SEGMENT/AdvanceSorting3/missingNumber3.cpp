#include<iostream>
#include<vector>
using namespace std;
int MissingNumbers(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    while(i<n){
        int correctIdx = nums[i];
        if(correctIdx==i || nums[i]==n) i++;
        else swap(nums[i],nums[correctIdx]);
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i) return i;
    }
    return n;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MissingNumbers(arr);
    return 0;
}