// Checking if an array is a subset of another with noting down that all elements are unique
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Superset array
    vector<int> super;
    int n;
    cout<<"Enter superset array size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        super.push_back(x);
    }
    // Subset array
    vector<int> sub;
    int m;
    cout<<"Enter subset array size : ";
    cin>>m;
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        sub.push_back(y);
    }
    int store = sub.size();
    int count = 0;
    for(int i=0;i<m;i++){
        int c = sub[i];
        for(int j=0;j<n;j++){
            if(c==super[j]){
                count++;
                continue;
            }
        }
    }
    if(count==store) cout<<"Yes, the given array sub is the subset of super array";
    else cout<<"No, there is no array which is a subset of another array";
    return 0;
}