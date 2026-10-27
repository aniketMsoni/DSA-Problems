#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int minimumProduct(vector<int>& v){
    int cz = 0, cn = 0, cp = 0;
    int prod_pos = 1;
    int prod_neg = 1;
    int largestNegative = INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i] < 0){
            cn++;
            prod_neg *= v[i];
            largestNegative = max(largestNegative, v[i]);
        }
        if(v[i] == 0) cz++;
        if(v[i] > 0){
            cp++;
            prod_pos *= v[i];
        }
    }
    
    if(cn == 0){
        if(cz != 0) return 0;
        else{
            int mn = *min_element(v.begin(), v.end());
            return mn;
        }
    }
    else{
        if(cn % 2 == 0){
            // even -ves are there so take all except largest negative
            return (prod_neg / largestNegative) * prod_pos;
        }
        else return prod_neg * prod_pos; 
    }
    return -1;
}
int main(){
    vector<int> v  {-2, -3, 1, 4, 2, 0};
    cout<<minimumProduct(v);
}