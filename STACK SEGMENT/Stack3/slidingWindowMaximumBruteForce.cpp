#include<iostream>
#include<stack>
#include<climits>
#include<vector>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    vector<int> ans;
    int n = arr.size();
    for(int i=0;i<n-k+1;i++){
        int mx = INT_MIN;
        for(int j=i;j<i+k;j++){
            mx = max(mx, arr[j]);
        }
        ans.push_back(mx);
    }
    return ans;
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
    vector<int> result = maxSlidingWindow(arr, k);
    for(int ele : result) cout<<ele<<" ";
    return 0;
}