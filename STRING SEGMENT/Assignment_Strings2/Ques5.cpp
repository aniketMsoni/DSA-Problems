// Return the word that is lexographically maximum in a given sentence str.
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
string lexoMax(vector<string> v){
    sort(v.begin(),v.end());
    string lastSortedWord = v[v.size()-1];
    return lastSortedWord;
}
int main(){
    string str;
    cout<<"Enter the sentence : \n";
    getline(cin,str);
    vector<string> v;
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    string lastSortedWord = lexoMax(v);
    cout<<"The lexigraphically maximum word is : "<<lastSortedWord;
}