#include<iostream>
#include<string>
using namespace std;
void generateParenthesis(string ans, int n, int o, int c){
    if(c==n){
        cout<<ans<<endl;
        return;
    }
    if(c>o) return;
    if(o<n) generateParenthesis(ans+'(',n,o+1,c);
    if(c<o) generateParenthesis(ans+')',n,o,c+1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    generateParenthesis("",n,0,0);
}