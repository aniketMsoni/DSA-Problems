#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> str;
    int n;
    cout<<"Enter size of string vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        str.push_back(x);
    }
    int max = stoi(str[0]), idx = -1;
    for(int i=1;i<str.size();i++){
        int a = stoi(str[i]);
        if(max<a){
            max = a;
            idx = i;
        }
    }
    cout<<"Maximum integer in the vector of integer strings is : "<<str[idx]<<endl;
    cout<<"And it's index is : "<<idx;
}