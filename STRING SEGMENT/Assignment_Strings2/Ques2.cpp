// Find the 2nd largest digit in the string consisting of digits from '0' to '9'
#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main(){
    string s;
    cout<<"Enter integer string : ";
    cin>>s;
    int x = stoi(s);
    int store = x, store1 = x;
    int max = INT_MIN;
    while(store!=0){
        int ld = store%10;
        if(max<ld) max = ld;
        store/=10;
    }
    int smax = INT_MIN;
    while(store1!=0){
        int ld1 = store1%10;
        if(smax<ld1 && ld1!=max) smax = ld1;
        store1/=10;
    }
    cout<<"The 2nd largest digit in the given integer string is : "<<smax;
    return 0;
}