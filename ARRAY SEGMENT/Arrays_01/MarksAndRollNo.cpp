#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int marks[n];
    cout<<"Enter marks of students : ";
    for(int i=0;i<=n-1;i++){
       cin>>marks[i];
    }   
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}