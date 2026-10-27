// Check whether the given array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    
    cout<<"Enter elements of the array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bool flag = false; // false means sorted array
    for(int i=0;i<=v.size()-2;i++){
        if(v.at(i) > v.at(i+1)){
            flag = true; // true means unsorted array
            break;
        }
    }
    if(flag == false) cout<<"Yes, Array is sorted";
    else cout<<"No, Array is unsorted";
}