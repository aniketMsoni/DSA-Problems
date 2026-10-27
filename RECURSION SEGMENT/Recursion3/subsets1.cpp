#include<iostream>
#include<string>
using namespace std;
void subsets(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    subsets(ans,original,idx+1);
    subsets(ans+ch,original,idx+1);
}
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    subsets("",s,0);
    return 0;
}