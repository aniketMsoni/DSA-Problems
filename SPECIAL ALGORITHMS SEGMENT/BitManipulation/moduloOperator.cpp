#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = INT_MAX;
    cout<<(2+n)%5<<endl; // wrong approach
    cout<<(2%5 + n%5)%5<<endl; // right approach
    return 0;
}