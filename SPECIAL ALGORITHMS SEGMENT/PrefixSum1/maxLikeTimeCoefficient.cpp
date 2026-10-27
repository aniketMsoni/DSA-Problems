#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxSatisfaction(vector<int>& satisfaction) {
    int n = satisfaction.size();
    sort(satisfaction.begin(),satisfaction.end());
    // Suffix Sum Array
    vector<int> suf(n);
    suf[n-1] = satisfaction[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i] = suf[i+1] + satisfaction[i];
    }
    // Finding pivot index
    int idx = -1;
    for(int i=0;i<n;i++){
        if(suf[i]>=0){
            idx = i;
            break;
        }
    }
    if(idx==-1) return 0;
    // Max sum of like time coefficient
    int likeTimeCo = 0;
    int x = 1;
    for(int i=idx;i<n;i++){
        likeTimeCo += x*satisfaction[i];
        x++;
    }
    return likeTimeCo;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSatisfaction(arr);
}