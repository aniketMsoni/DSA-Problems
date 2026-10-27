#include <iostream>
#include <vector>
#include <string>
using namespace std;
string helper(string str, int k, string ans){
    int n = str.length();
    if(n == 0) return ans;
    int fact = 1;
    for (int i=2;i<=n-1;i++){
        fact *= i;
    }
    int idx = k / fact;
    if (k % fact == 0) idx--;
    char ch = str[idx];
    string left = str.substr(0, idx);
    string right = str.substr(idx + 1);
    int q = 1;
    if (k % fact == 0) q = fact;
    else q = k % fact;
    return helper(left + right, q, ans + ch);
}
string getPermutation(int n, int k){
    string original = "";
    for (int i = 1; i <= n; i++){
        original += to_string(i);
    }
    return helper(original, k, "");
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int k;
    cout<<"Enter k : ";
    cin>>k;
    cout<<getPermutation(n,k);
}