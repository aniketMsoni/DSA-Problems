#include<iostream>
using namespace std;
int reverse(int n, int rev){
    if(n==0){
        return rev;
    }
    int ld = n % 10;
    rev = rev*10 + ld;
    return reverse(n/10,rev);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int rev = reverse(n,0);
    if(rev==n) cout<<n<<" is a palindrome number";
    else cout<<"Not a palindrome number";
    return 0;
}