#include<iostream>
#include<climits>
using namespace std;
int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    string s;
    for(int i=0;i<str.size();i++){
        if(str[i]>='X') s.push_back(str[i]);
    }
    int n = s.size();
    // selection sort decreasing
    // for(int i=0;i<n-1;i++){
    //     int max = INT_MIN;
    //     int midx = -1;
    //     for(int j=i;j<n;j++){
    //         if(max<s[j]){
    //             max = s[j];
    //             midx = j;
    //         }
    //     }
    //     swap(s[i],s[midx]);
    // }

    // insertion sort decreasing
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && s[j]>s[j-1]){
            swap(s[j],s[j-1]);
            j--;
        }
    }
    cout<<s;
    return 0;
}