// Time Complexity -- O(n*sqrt(n))
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j*j<n;j++){
            cout<<"PhysicsWallah"<<endl;
        }
    }
    return 0;
}