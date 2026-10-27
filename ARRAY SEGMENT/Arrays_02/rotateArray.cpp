#include<iostream>
#include<vector>
using namespace std;
 
void reversePart(vector<int> &v,int i,int j){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

void display(vector<int>& v){
    cout<<"Array : ";
    for(int i=0;i<=v.size()-1;i++){
        cout<<v.at(i)<<" ";
    }
    return;
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter n : ";
    cin>>n;

    //input
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int N = v.size();
    display(v);
    cout<<endl;
    int k;
    cout<<"Enter the number by which array should be rotated : ";
    cin>>k;
    if(k>N) k = k % N;
    reversePart(v,0,N-k-1);
    reversePart(v,N-k,N-1);
    reversePart(v,0,N-1);
    display(v);
}