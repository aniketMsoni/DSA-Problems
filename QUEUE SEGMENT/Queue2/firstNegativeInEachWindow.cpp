#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    // Queue input and window size input
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"Enter window size : ";
    cin>>k;
    queue<int> q;
    vector<int> ans;
    for(int i=0;i<v.size();i++){
        if(v[i]<0) q.push(i);
    }
    // Doing window movement
    int i = 0;
    while(i<=n-k){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else ans.push_back(v[q.front()]);
        i++;
    }
    cout<<endl<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}