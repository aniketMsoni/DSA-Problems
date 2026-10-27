#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void printMax(vector<int>& v, int max, int x){
    if(x==v.size()){
        cout<<max;
        return;
    }
    if(max<v[x]) max = v[x];
    printMax(v,max,x+1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printMax(arr,INT_MIN,0);
    return 0;
}