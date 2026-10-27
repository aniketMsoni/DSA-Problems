#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //no need to mention the size
    // At time of inserting / input, don't use []
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    // For updation and access
    // v[0] = 88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}