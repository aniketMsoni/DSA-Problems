#include<iostream>
#include<string>
using namespace std;
string countAndSay(int n){
    if(n==1) return "1";
    string s = countAndSay(n-1);
    string ans = "";
    int count = 1;
    char ch = s[0];
    for(int i=1;i<s.size();i++){
        char dh = s[i];
        if(ch==dh){
            count++;
        }
        else{
            ans += (to_string(count) + ch);
            count = 1;
            ch = s[i];
        }
    }
    ans += to_string(count) + ch;
    return ans;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<countAndSay(n);
    return 0;
}