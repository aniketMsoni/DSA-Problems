#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sortIntegers(vector<int>& v){
    int i = 0;
    int j = v.size() - 1;
    while(i<j){
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(i>j) break;
        if((v[i]>0) && (v[j]<0)){
            swap(&v[i],&v[j]);
        }
    }
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    sortIntegers(v);
    display(v);
}