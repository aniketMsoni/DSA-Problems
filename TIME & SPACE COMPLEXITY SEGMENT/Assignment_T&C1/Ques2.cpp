// Time Complexity -- O(1)
#include<iostream>
using namespace std;
int main(){
    int c = 10;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=n;i>1;i/=i){
        c++;
        cout<<i<<" ";
    }
    return 0;
}