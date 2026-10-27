#include<iostream>
using namespace std;
int main(){
    int num[26],temp=0;
    num[0] = 100;
    num[25] = 200;
    temp = num[0];
    num[0] = num[25];
    num[25] = temp;
    cout<<num[0]<<" "<<num[25];
}