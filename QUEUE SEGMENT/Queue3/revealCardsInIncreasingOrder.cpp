#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> deckRevealedIncreasing(vector<int>& deck) {
    int n = deck.size();
    sort(deck.begin(),deck.end());
    vector<int> ans(n);
    queue<int> q;
    for(int i=0;i<n;i++){
        q.push(i);
    }
    for(int i=0;i<n;i++){
        int idx = q.front();
        q.pop();
        q.push(q.front());
        q.pop();
        ans[idx] = deck[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = deckRevealedIncreasing(arr);
    for(int ele : result) cout<<ele<<" ";
    return 0;
}