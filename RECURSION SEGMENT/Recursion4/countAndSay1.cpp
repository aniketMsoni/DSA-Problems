#include<iostream>
#include<string>
using namespace std;
string countAndSay(int n){
    if(n==1) return "1";
    string s = countAndSay(n-1);
    string ans = "";
    for(int i=0;i<s.length();){
        int count = 1;
        int j = i+1; //2
        while(j<s.size() && s[i]==s[j]){
            j++;
            count++;
        }
        ans += to_string(count) + s[i];
        i = j;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    string s = countAndSay(n);
    cout<<s;
    return 0;
}