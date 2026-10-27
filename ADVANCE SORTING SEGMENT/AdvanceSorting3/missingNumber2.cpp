#include<iostream>
#include<vector>
using namespace std;
int MissingNumbers(vector<int>& nums){
    int n = nums.size();
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
    }
    int temp = (n*(n+1))/2;
    return temp - sum;
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