// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
#include<iostream>
#include<vector>
using namespace std;
int returnUniqueNo(vector<int> arr){
    int count[arr.size()],store = 0;
    for(int i=0;i<arr.size()-1;i++){
        store = arr[i];
        count[i]=0;
        for(int j=i+1;j<arr.size();j++){
            if(store==arr[j]){
                count[i]++;
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        if(count[i]==0) return arr[i];
    }
    return 0;
}
int main(){
    vector<int>arr = {1,2,3,4,1,2,0,0,3};
    int unique = returnUniqueNo(arr);
    if(unique!=0) cout<<"The Unique element is : "<<unique;
    else cout<<"No, Unique element found";
    return 0;
}