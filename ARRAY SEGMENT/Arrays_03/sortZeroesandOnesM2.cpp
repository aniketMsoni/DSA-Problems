#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
void twoPtr(vector<int> &v){
    int i = 0;
    int j = v.size() - 1;
    while(i<=j){
        if(v[i]==0 && v[j]==0){
            v[j] = 1;
        }
        else if(v[i]==1 && v[j]==1){
            v[i] = 0;
        }
        else if(v[i]==1 && v[j]==0){
            swap(&v[i],&v[j]);
        }
        i++;
        j--;
    }
}
void display(vector<int> v){
    cout<<"Array : ";
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    return;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    
    cout<<"Enter 0's and 1's in the array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<endl;

    twoPtr(v);
    display(v);
}