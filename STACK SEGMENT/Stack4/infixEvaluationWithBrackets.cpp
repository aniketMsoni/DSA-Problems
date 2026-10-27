#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='*' || ch=='/') return 2;
    else return 1;
}
int solve(int val1, char ch, int val2){
    if(ch=='*') return val1 * val2;
    else if(ch=='-') return val1 - val2;
    else if(ch=='+') return val1 + val2;
    else return val1 / val2;
}
int main(){
    string s = "(2+6)*4/8-3"; // infix expression
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        // checking if s[i] is digit or not
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else{ // s[i] is +, =, * , (, ) or /
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch =  op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, ch, val2);
                    val.push(ans);
                }
                op.pop();
            }
            else if(prio(s[i])>prio(op.top())) op.push(s[i]);
            else{ // priority(s[i]) <= priority(op.top())
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    // i have to do val1 op val2
                    char ch =  op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, ch, val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the operator stack can have values
    // so make it empty    
    while(op.size()>0){
        // work
        char ch =  op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, ch, val2);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<(2+6)*4/8-3;
    return 0;
}