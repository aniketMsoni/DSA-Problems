#include<iostream>
#include<vector>
using namespace std;
int c = 0;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0, j = 0, k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(a.size()==i) while(j<b.size()) res[k++] = b[j++];
    else if(b.size()==j) while(i<a.size()) res[k++] = a[i++];
}
int inversionCount(vector<int> &a, vector<int> &b){
    int count = 0;
    int i = 0; // corresponds to a
    int j = 0; // corresponds to b
    while(i<a.size() && b.size()){
        if(a[i]>b[j]){
            count += (a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2, n2 = n - n/2;
    vector<int> a(n1), b(n2);
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }
    // Magic aka recursion
    mergeSort(a);
    mergeSort(b);
    // Counting the inversion
    c += inversionCount(a,b);
    // Merging the vectors
    merge(a,b,v);
    a.clear();
    b.clear();
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
    mergeSort(v);
    cout<<c;
}