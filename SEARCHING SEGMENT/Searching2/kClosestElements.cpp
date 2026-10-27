#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> v(k);
        int n = arr.size();
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                v[i] = arr[i];
            }
            return v;
        }
        if(x>arr[n-1]){
            int i = n-1;
            int j = k-1;
            while(j>=0){
                v[j] = arr[i];
                i--;
                j--;
            }
            return v;   
        }
        int lo = 0;
        int hi = n-1;
        bool flag = false; // if x is present or not in arr
        int mid = -1;
        int t = 0; // representing the current index of answer vector v
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            if(arr[mid]==x){
                flag = true;
                v[t] = x;
                t++;
                break;
            }
            else if(arr[mid]>x) hi = mid - 1;
            else lo = mid + 1;
        }
        int lb = hi;
        int ub = lo; 
        if(flag == true){  // target is found in the array 
            lb = mid - 1;
            ub = mid + 1;
        }
        while(t<k && lb>=0 && ub<=n-1){
            int d1 = abs(x - arr[lb]);
            int d2 = abs(x - arr[ub]);
            if(d1<=d2){
                v[t] = arr[lb];
                lb--;
            } 
            else{
                v[t] = arr[ub];
                ub++;
            }
            t++; 
        }
        if(lb<0){
            while(t<k){
                v[t] = arr[ub];
                ub++;
                t++;
            }
        }
        if(ub>n-1){
             while(t<k){
                v[t] = arr[lb];
                lb--;
                t++;
            }
        }
        sort(v.begin(),v.end()); 
        return v; 
    }
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tgt;
    cout<<"Enter target : ";
    cin>>tgt;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    vector<int> v = findClosestElements(arr,tgt,k);
    return 0;
}