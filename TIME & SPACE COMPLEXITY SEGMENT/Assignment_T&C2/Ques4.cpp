// Time Complexity -- O(n)
#include<iostream>
using namespace std;
int main(){
    int c = 0;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=n;i>0;i/=2){
        for(int j=0;j<i;j++){
            c++;
        }
    }
    return 0;
}