#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr,int n,int tgt){
    if(n==arr.size()){
        cout<<"-1";
        return;
    }
    if(arr[n]==tgt){
        cout<<n<<endl;
        exit(1);
    }
    print(arr,n+1,tgt);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tgt;
    cout<<"Enter target : ";
    cin>>tgt;
    print(arr,0,tgt);
    return 0;
}