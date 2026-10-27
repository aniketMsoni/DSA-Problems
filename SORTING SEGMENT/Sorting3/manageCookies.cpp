#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maximizeCookies(vector<int>& g,vector<int>& s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){
            count++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> s; // cookie size array
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push_back(x);
    }
    int m;
    cout<<"Enter m : ";
    cin>>m;
    vector<int> g; // greed array
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        g.push_back(x);
    }
    int count = maximizeCookies(s,g);
    cout<<count;
}