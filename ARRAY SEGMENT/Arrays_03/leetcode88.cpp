#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //m is size of nums 1
        //n is size of nums 2
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while(i>=0 && j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k] = nums2[j];
                j--;
                k--;
            }
            else{
                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }
        while(j >= 0){
                nums1[k] = nums2[j];
                j--;
                k--;
       }
    }
int main(){
    int n;
    cout<<"Enter size of array 2 : ";
    cin>>n;
    vector<int> v2(n);
    cout<<"Enter Sorted Array 2 : ";
    for(int i=0;i<n;i++){
        cin>>v2.at(i);
    }
    int m;
    cout<<"Enter size of array 1 : ";
    cin>>m;
    int size = m + n;
    cout<<"The size of array 1 according to the question is : "<<size<<endl;
    vector<int> v1(size);
    cout<<"Enter Sorted Array 1 : ";
    for(int i=0;i<m;i++){
        cin>>v1.at(i);
    }
    for(int i=m;i<size;i++){
        v1.at(i) = 0;
    }
    merge(v1,size,v2,n);
    cout<<"The merged array is : ";
    for(int i=0;i<size;i++){
        cout<<v1[i]<<" ";
    }
}