#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    int max = 0;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int count = 1;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]) count++;
        }
        if(max<count) max = count;
    }
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int count = 1;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]) count++;
        }
        if(count==max) cout<<str[i]<<" "<<count<<endl;

    }
    return 0;
}