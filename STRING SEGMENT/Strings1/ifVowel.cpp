#include<iostream>
using namespace std;
int main(){
    // CODE FOR STRINGS THAT ARE ALREADY GIVEN
    // string str = "aniket";
    // int count = 0, i = 0;
    // while(str[i]!='\0'){
    //     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
    //         count++;
    //     }
    //     i++;
    // }
    // cout<<count;

    // CODE FOR STRINGS OF LENGTH N
    int n;
    cout<<"Enter string length : ";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    } 
    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    cout<<count;
}