#include<iostream>
using namespace std;
void permutationString(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutationString(ans+ch,left+right);
    }
}
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    permutationString("",s);
}