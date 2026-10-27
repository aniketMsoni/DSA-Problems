// Range Sum Query
#include<iostream>
#include<vector>
using namespace std;
class NumArray {
private: 
    vector<int> prefixSum;
public:
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size() + 1, 0);
        for(int i=0;i<nums.size();i++){
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right+1] - prefixSum[left];
    }
};
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left;
    cout<<"Enter left : ";
    cin>>left;
    int right;
    cout<<"Enter right : ";
    cin>>right;
    NumArray num = NumArray(arr);
    cout<<num.sumRange(left,right);
    return 0;
}
