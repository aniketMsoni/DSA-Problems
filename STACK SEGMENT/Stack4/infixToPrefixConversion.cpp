#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='*' || ch=='/') return 2;
    else return 1;
}
string solve(char ch, string val1, string val2){
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}
int main(){
    string s = "2+6*4/8-3"; // infix expression
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        // checking if s[i] is digit or not
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{ // s[i] is +, =, * , (, ) or /
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch =  op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(ch, val1, val2);
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
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(ch, val1, val2);
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
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(ch, val1, val2);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    return 0;
}