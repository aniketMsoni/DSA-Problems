#include<iostream>
using namespace std;
int main(){
    // char str[5] = {65,66,67,68};
    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";
    // }
    cout<<endl;
    char str1[] = {'a','b','c','d'};
    for(int i=0;str1[i]!='\0';i++){
        cout<<str1[i]<<endl;
    }
    // cout<<str1<<endl;
    // cout<<sizeof(str1);
    cout<<(int)str1[4];
}
