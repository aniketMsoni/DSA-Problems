#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxInArray(vector<int>& v, int x){
    if(x==v.size()) return INT_MIN;
    return max(v[x],maxInArray(v,x+1));
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxInArray(arr,0);
    return 0;
}