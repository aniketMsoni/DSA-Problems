#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int target;
    cout<<"Enter target : ";
    cin>>target;
    int lo = 0;
    int hi = v.size()-1;
    bool flag = false; // not present
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid]==target){
            flag = true;
            break;
        }
        else if(v[mid]<target) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag==false) cout<<"Not present";
    else cout<<"Present";
}