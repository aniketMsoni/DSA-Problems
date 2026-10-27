#include<iostream>
#include<vector>
using namespace std;
vector<int> canSeePersonsCount(vector<int>& heights) {
    vector<int> result;
    int n = heights.size();
    for(int i=0;i<n-1;i++){
        int temp = 0; // temp denotes max height kya ho rhi aage badhne pe
        int count = 0;
        for(int j=i+1;j<n;j++){
            if(heights[j]>temp){
                count++;
                temp = max(temp,heights[j]);
            }
            if(heights[i]<=heights[j]) break;
        }
        result.push_back(count);
    }
    result.push_back(0);
    return result;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = canSeePersonsCount(arr);
    for(int ele : result) cout<<ele<<" ";
    return 0;
}