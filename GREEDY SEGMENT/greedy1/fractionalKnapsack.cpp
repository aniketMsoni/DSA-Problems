#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>& p1, pair<int,int>& p2){
    // first means profit, second means weight
    double r1 = (p1.first * 1.0) / (p1.second * 1.0);
    double r2 = (p2.first * 1.0) / (p2.second * 1.0);
    return r1 > r2;
}
double fractionalKnapsack(vector<int>& weights, vector<int>& profit, int W){
    vector<pair<int, int> > arr;
    for(int i=0;i<weights.size();i++){
        arr.push_back({profit[i], weights[i]});
    }
    double result = 0;
    sort(arr.begin(), arr.end(), cmp);  
    for(int i=0;i<arr.size();i++){
        if(arr[i].second <= W){
            result += arr[i].first;
            W -= arr[i].second; 
        }
        else{
            result += ((arr[i].first) / (arr[i].second*1.0)) * W;
            W = 0;
            break;
        }
    }
    return result;
}
int main(){
    vector<int> profit = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int W = 50;
    cout<<fractionalKnapsack(weights, profit, W);
}