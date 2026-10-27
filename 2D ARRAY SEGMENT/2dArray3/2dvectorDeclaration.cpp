#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5,2);
    vector< vector<int> > v(3,vector<int> (4));
    // Refers that we are vector of 3 vector and putting size 4 vector at each indice of the 2d vector

    int m =  v.size();
    int n = v[0].size();
    cout<<"Row no : "<<m<<" and column no : "<<n;
 
}