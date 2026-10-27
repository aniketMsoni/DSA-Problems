#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]>='X') str.push_back(s[i]);
    }
    int n = str.size();

    //Bubble sort in decreasing order
    for(int i=0;i<n-1;i++){ // n-1 passes
        // traverse
        bool flag = true; // no swap happen
        for(int j=0;j<n-1-i;j++){
            if(str[j]<str[j+1]){
                swap(str[j],str[j+1]);
                flag = false;
            }
        }
        if(flag == true){ // swap actually didn't happened
            break;
        }
    }

    cout<<"The string after sorting in descreasing order will be : \n"<<str;  
    return 0;
}