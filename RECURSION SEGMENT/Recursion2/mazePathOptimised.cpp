#include<iostream>
using namespace std;
int mazePath(int m, int n){
    if(m==1 && n==1) return 1;
    if(m<1 || n<1) return 0;
    int rightWays = mazePath(m,n-1);
    int leftWays = mazePath(m-1,n);
    return rightWays+leftWays;
}
void printPath(int m, int n, string s){
    if(m<1 || n<1) return;
    if(m==1 && n==1){
        cout<<s<<endl;
        return;
    }
    printPath(m,n-1,s+'R'); // right
    printPath(m-1,n,s+'D'); // down
}
int main(){
    int m;
    cout<<"Enter row : ";
    cin>>m;
    int n;
    cout<<"Enter column : ";
    cin>>n;
    cout<<mazePath(m,n)<<endl;
    printPath(m,n,"");
    return 0;
}