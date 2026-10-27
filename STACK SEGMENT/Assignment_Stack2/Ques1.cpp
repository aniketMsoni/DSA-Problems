// Leetcode 20 -- Valid Parentheis
#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    if(s.size()%2!=0) return false;
    stack<char> st;
    for(int i=0;i<s.size();i++){ // opening brackets aa rhe hai
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{ // closing brackets hai
            if(s[i]=='}' && st.top()=='{' || s[i]==']' && st.top()=='[' || s[i]==')' && st.top()=='(') st.pop();
            else return false;
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<isValid(s);
}