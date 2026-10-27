#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,2,7,11};
    int *ptr = arr;
    int *p = arr;
    int *pptr = arr;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*(pptr+i)<<" ";
    }
    pptr = arr; // pptr is pointing to 1st element
    *pptr = 8; // pptr[0] = 8;
    pptr++; // pptr is pointing to 2nd element
    *pptr = 9; // pptr[1] = 9
    pptr--; // pptr is pointing to 1st element
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*(pptr+i)<<" ";
    }
}