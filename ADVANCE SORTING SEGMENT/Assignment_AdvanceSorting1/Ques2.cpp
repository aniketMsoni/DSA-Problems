// Count reverse pairs in a given array
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0, j = 0, k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()) while(j<b.size()) res[k++] = b[j++];
    else if(j==b.size()) while(i<a.size()) res[k++] = a[i++];
}
int helper(vector<int>& a, vector<int>& b){
    int count = 0;
    int i = 0, j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>2LL*b[j]){
            count += (a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}
int reversePairs(vector<int>& nums){
    int count = 0;
    int n = nums.size();
    if(n==1) return 0;
    int n1 = n/2, n2 = n - n/2;
    vector<int> a(n1), b(n2);
    // Copy Paste
    for(int i=0;i<n1;i++) a[i] = nums[i];
    for(int i=0;i<n2;i++) b[i] = nums[i+n1];
    // Recursion
    count += reversePairs(a);
    count += reversePairs(b);
    // Counting reverse pairs
    count += helper(a,b);
    // Merge
    merge(a,b,nums);
    return count;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v(arr,arr+n);
    cout<<reversePairs(v);
}