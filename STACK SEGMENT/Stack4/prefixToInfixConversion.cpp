#include<iostream>
#include<stack>
using namespace std;
string solve(char ch, string val1, string val2){
    string s = "";
    s += val1;
    s.push_back(ch);
    s += val2;
    return s;
}
int main(){
    string s = "-/*+79483"; // infix expression
    stack<string> val;
    for(int i=s.size()-1;i>=0;i--){
        // checking if s[i] is digit or not
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
            string val1 =  val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(s[i], val1, val2);
            val.push(ans);
        }
    } 
    cout<<val.top()<<endl;
    return 0;
}