#include<iostream>
#include<vector>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int k = minutes;
    int prevLoss = 0;
    int maxIdx = 0;
    for(int i=0;i<k;i++){
        if(grumpy[i]==1) prevLoss += customers[i];
    }
    int maxLoss = prevLoss;
    int i = 1;
    int j = k;
    int currloss = 0;
    while(j<customers.size()){
        currloss = prevLoss;
        if(grumpy[j]==1) currloss += customers[j];
        if(grumpy[i-1]==1) currloss -= customers[i-1];
        if(maxLoss<currloss){
            maxLoss = currloss;
            maxIdx = i;
        }
        prevLoss = currloss;
        i++;
        j++;
    }
    for(int i=maxIdx;i<maxIdx+k;i++){
        grumpy[i] = 0;
    }
    int maxSatisfied = 0;
    for(int i=0;i<customers.size();i++){
        if(grumpy[i]==0) maxSatisfied += customers[i];
    }
    return maxSatisfied;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> customers(n);
    vector<int> grumpy(n);
    for(int i=0;i<n;i++){
        cin>>customers[i];
    }
    for(int i=0;i<n;i++){
        cin>>grumpy[i];
    }
    int min;
    cout<<"Enter minutes : ";
    cin>>min;
    cout<<maxSatisfied(customers,grumpy,min);
    return 0;
}