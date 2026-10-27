#include<iostream>
using namespace std;
int main(){
    char str[] = {'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    char str1[10] = "abcde";
    for(int i=0;i<5;i++){
        cout<<str1[i]<<" ";
    }
    cout<<endl<<(int)str1[5];
    return 0;
}
