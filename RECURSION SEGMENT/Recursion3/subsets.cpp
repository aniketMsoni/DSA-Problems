#include<iostream>
#include<string>
using namespace std;
void subsets(string ans, string original){
    if(original.size()==0){
        cout<<ans<<" ";
        return;
    }
    char ch = original[0];
    subsets(ans+ch,original.substr(1));
    subsets(ans,original.substr(1));
}
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    subsets("",s);
    return 0;
}