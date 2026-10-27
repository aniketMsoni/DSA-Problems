#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
    int n = nums.size();
    int i = 0, j = 0, flips = 0;
    int len = INT_MIN, maxLen = INT_MIN;
    while(j<n){
        if(nums[j]==1) j++;
        else{ // nums[j]==0
            if(flips<k){
                flips++;
                j++;
            }
            else{ // flips == k
                // calculate len
                len = j - i;
                maxLen = max(maxLen,len);
                // i ko just uske aage wale 0 se ek idx aage le jao
                while(nums[i]==1) i++; // After this, nums[i] == 0 100% TRUE
                i++;
                j++;
            }
        }
    }
    len = j - i;
    maxLen = max(maxLen,len);
    return maxLen;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k : ";
    cin>>k;
    cout<<longestOnes(arr,k);
}