#include<iostream>
#include<stack>
using namespace std;
int solve(char ch, int val1, int val2){
    if(ch=='*') return val1 * val2;
    else if(ch=='-') return val1 - val2;
    else if(ch=='+') return val1 + val2;
    else return val1 / val2;
}

int main(){
    string s = "79+4*8/3-"; // infix expression
    stack<int> val;
    for(int i=0;i<s.size();i++){
        // checking if s[i] is digit or not
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else{
            int val2 =  val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(s[i], val1, val2);
            val.push(ans);
        }
    } 
    cout<<val.top()<<endl;
    return 0;
}