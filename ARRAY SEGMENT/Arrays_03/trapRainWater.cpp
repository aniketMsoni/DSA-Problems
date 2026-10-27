#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
        int n = height.size();
        // prev greatest element array 
        int prev[n];
        prev[0] = -1;
        int max = height[0];
        for(int i=1;i<n;i++){
            prev[i] = max;
            if(max<height[i]) max = height[i];
        }
        // next greatest element array
        int next[n];
        next[n-1] = -1;
        max = height[n-1];
        for(int i=n-2;i>=0;i--){
            next[i] = max;
            if(max<height[i]) max = height[i];
        }
        // minimum array -> prev as minimum
        for(int i=0;i<n;i++){
            prev[i] = min(prev[i],next[i]);
        }
        //calculating water
        int water = 0;
        for(int i=1;i<n-1;i++){
            if(height[i]<prev[i]){
                water += (prev[i]-height[i]);
            }
        }
        return water;
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    int water = trap(v);
    cout<<"The stored water is : "<<water<<" units!!"<<endl;
    return 0;
}
