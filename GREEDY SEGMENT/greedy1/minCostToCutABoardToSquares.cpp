#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}
class Solution {
  public:
    int minCost(int n, int m, vector<int>& verticalCost, vector<int>& horizontalCost) {
        //  code here
        sort(verticalCost.begin(), verticalCost.end(), cmp);
        sort(horizontalCost.begin(), horizontalCost.end(), cmp);
        int h = 0, v = 0;
        int vz = 1, hz = 1;
        long long total = 0;
        while(h <  horizontalCost.size() and v < verticalCost.size()){
            if(horizontalCost[h] > verticalCost[v]){
                total += (hz * horizontalCost[h]);
                h++;
                vz++;
            }
            else{
                total += (vz * verticalCost[v]);
                v++;
                hz++;
            }
        }
        while(h < horizontalCost.size()){
            total += (hz * horizontalCost[h]);
            h++;
            vz++;
        }
        while(v < verticalCost.size()){
            total += (vz * verticalCost[v]);
            v++;
            hz++;
        }
        return (int)total;
    }
};
int main(){
    int n  = 4;
    int m = 6;
    vector<int> horizontalCost = {2, 1, 3, 1, 4};
    vector<int> verticalCost = {4, 1, 2};
    Solution s;
    cout<<s.minCost(n, m, verticalCost, horizontalCost);
    return 0;
}
