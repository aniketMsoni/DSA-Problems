#include<iostream>
using namespace std;
int main(){
    string s = "aniketSoni";
    int count = 0;
    int i = 0;
    while(s[i]!='\0'){
        if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o' && s[i]!='u'){
            count++;
        }
        i++;
    }
    cout<<"Total consonant in the given string are : "<<count;
    cout<<endl<<"And total no of vowels are : "<<s.size()-count;
}