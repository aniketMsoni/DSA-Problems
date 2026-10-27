#include<cmath>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    cout<<"Enter array : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int num=0,sum=0;
    for(int i=0;i<n;i++){
        num = pow(10,n-1-i); 
        sum +=(num*v.at(i));
    }
    cout<<sum;
    return 0;
}