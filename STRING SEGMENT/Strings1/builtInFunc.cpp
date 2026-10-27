#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // length() and size() functions
    string str = "Aniket";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<endl;

    // push_back() and pop_back() functions
    string str1 = "Aniket";
    str1.push_back('a');
    cout<<str1<<endl;
    str1.pop_back();
    cout<<str1<<endl;
    cout<<endl;

    // "+" operator
    string s = "aniket";
    string t = " soni";
    cout<<s<<endl;
    s = s + t;
    cout<<s<<endl;
    string st = "aniket";
    st = st + 'x';
    cout<<st<<endl;
    cout<<endl; 

    // Reverse
    string s1 = "abcdef";
    string s2 = "abcdef";
    cout<<s1<<endl;
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
    cout<<s2<<endl;
    reverse(s2.begin()+2,s2.begin()+5); // reversin from c to e
    cout<<s2<<endl<<endl;
}