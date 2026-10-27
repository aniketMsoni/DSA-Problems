#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n<5){
        cout<<"Size of string is less than 5...";
        return 0;
    }
    char str[n+1];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    str[n] = '\0';
    cout<<"Input String is : "<<str<<endl;
    int i = 1;
    int j = 4;
    char temp;
    while(i<=j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout<<str<<endl;
}
