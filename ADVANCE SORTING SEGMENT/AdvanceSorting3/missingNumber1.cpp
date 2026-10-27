#include<iostream>
#include<vector>
using namespace std;
int MissingNumbers(vector<int>& nums){
    int n = nums.size();
    vector<bool> check(n+1,false);
    for(int i=0;i<n;i++){
        int ele = nums[i];
        check[ele] = true;
    }
    int idx = -1;
    for(int i=0;i<=n;i++){
        if(check[i]==false){
            idx = i;
            break;
        }
    }
    return idx;
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