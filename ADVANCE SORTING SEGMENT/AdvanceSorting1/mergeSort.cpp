#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0;
    int j = 0;
    int k  = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()) while(j<b.size()) res[k++] = b[j++];
    else if(j==b.size()) while(i<a.size()) res[k++] = a[i++];
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2, n2 = n - n/2;
    vector<int> a(n1), b(n2);
    // Copy paste
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }
    // Magic aka recursion
    mergeSort(a);
    mergeSort(b);
    // Merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[] = {5,1,0,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n1);
    cout<<"Original array : ";
    for(auto ele : a){
        cout<<ele<<" ";
    }
    cout<<endl;
    mergeSort(a);
    cout<<"Sorted array : ";
    for(auto ele : a){
        cout<<ele<<" ";
    }
}