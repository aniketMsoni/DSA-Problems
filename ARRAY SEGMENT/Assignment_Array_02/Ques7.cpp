//If an array arr contains n elements, then checking if the given array is a palindrome or not
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool palindromeChecker(vector<int> v,vector<int> v2){
    bool flag = false;// false means array is palindrome'
    for(int i=0;i<v.size();i++){
        if(v.at(i)!=v2.at(i)){
            flag = true;
            return 0;
        }
    }
    return 1;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    cout<<"Enter array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> v2(v.size());
    for(int i=0;i<n;i++){
        v2.push_back(v.at(i));
    }
    reverse(v2.begin(),v2.end());
    bool checker = palindromeChecker(v,v2);
    if(checker==0){
        cout<<"Array is not palindrome array!";
    }
    else cout<<"Array is palindrome array!";
    return 0;
}