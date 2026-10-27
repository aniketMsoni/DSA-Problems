#include<iostream>
#include<string>
using namespace std;
void generateStrings(int n, string ans){
    if(n==ans.length()){
        cout<<ans<<endl;
        return;
    }
    generateStrings(n,ans+'0');
    if(ans.length()== 0 || ans[ans.size()-1]!='1') generateStrings(n,ans+'1');
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    generateStrings(n,"");
    return 0;
}