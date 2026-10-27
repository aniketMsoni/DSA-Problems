// Print the largest three elements in the array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    //input
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int max = v[0];
    for(int i=0;i<v.size();i++){
        if(max<v[i]) max = v[i];
    }

    int smax = INT_MIN;
    for(int i=0;i<v.size();i++){
        if(smax<v[i] && v[i]!=max){
            smax = v[i];
        }
    }

    int thirdmax = INT_MIN;
    for(int i=0;i<v.size();i++){
        if(thirdmax<v[i] && v[i]!=max && v[i]!=smax){
            thirdmax = v[i];
        }
    }

    cout<<"Maximum is : "<<max<<endl;
    cout<<"2nd Maximum is : "<<smax<<endl;
    cout<<"3rd Maximum is : "<<thirdmax<<endl;
}