#include<iostream>
#include<vector>
using namespace std;
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<< v.at(i)<<" ";
    }
    cout<<endl;
    return;
}
void sortColorsDutch(vector<int> &v){
    int lo = 0;
    int mid = 0;
    int hi = v.size() - 1;
    while(mid<=hi){
        if(v[mid]==2){
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp = v[mid];
            v[mid] = v[lo];
            v[lo] = temp;
            mid++;
            lo++;
        }
        else mid++;
    }
    return;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    sortColorsDutch(v);
    cout<<"The sorted array through Dutch Flag Algorithm are as follows : ";
    display(v);
}