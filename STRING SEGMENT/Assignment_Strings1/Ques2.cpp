// Input a string of length n and count all the consonants in the given string
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        str.push_back(x);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    int consonant = str.length() - count;
    cout<<"No of consonants in our string are : "<<consonant<<endl;

}