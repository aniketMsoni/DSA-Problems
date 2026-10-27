#include<iostream>
#include<stack>
#include<string>
using namespace std;
string removeConsDuplicate(string s){
    stack<char> st;
    string result = "";
    for(int i=0;i<s.size();i++){
        if(st.size()==0) st.push(s[i]);
        else if(st.top()==s[i]) continue;
        else{
            result = result + st.top();
            st.pop();
            st.push(s[i]);
        }
    }
    if(st.size()!=0) result = result + st.top();
    return result;
}
string removeConsDuplicate2(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
    s = "";
    while(st.size()>0){
        s = st.top() + s;
        st.pop();
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter string : ";
    cin>>s;
    cout<<removeConsDuplicate(s)<<endl;
    cout<<removeConsDuplicate2(s);
}