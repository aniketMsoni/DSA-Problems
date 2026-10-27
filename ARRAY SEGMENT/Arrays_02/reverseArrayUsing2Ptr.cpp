#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i,int j,vector<int>& v){
    while(i<=j){
        v[i] = v[i] + v[j];
        v[j] = v[i] - v[j];
        v[i] = v[i] - v[j];
        i++;
        j--;
    }
    return;
}
void reverse(vector<int>& v){
    int i = 0;
    int j = v.size() - 1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //display(v);
    // int i = 0;
    // int j = v.size() - 1; 
    // THROUGH WHILE LOOP
    // while(i<=j){
    //     v[i] = v[i] + v[j];
    //     v[j] = v[i] - v[j];
    //     v[i] = v[i] - v[j];
    //     i++;
    //     j--;
    // }

    // My LOOP
    // for(int k=0;k<v.size()-1;k++){
    //     if(i<=j){v[i] = v[i] + v[j];
    //     v[j] = v[i] - v[j];
    //     v[i] = v[i] - v[j];
    //     i++;
    //     j--;}
    //     else if(i>j) break;
    // }

    // Sir's LOOP
    // for(int i=0,j=v.size()-1;i<=j;i++,j--){
    //     int  temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;  
    // }
    int i,j;
    cout<<"Enter intervals in which array should be reversed : ";
    cin>>i>>j;
    reversePart(i,j,v);
    //reverse(v);
    display(v);
}