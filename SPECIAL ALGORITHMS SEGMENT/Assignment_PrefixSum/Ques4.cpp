#include<iostream>
#include<vector>
using namespace std;
vector<int> totalSeats(vector<vector<int>>& bookings, int n){
    vector<int> ans(n);
    for(int i=0;i<bookings.size();i++){
        int first = bookings[i][0];
        int last = bookings[i][1];
        int seats = bookings[i][2];
        
        ans[first-1] += seats;
        if(last<n){
            ans[last] -= seats;
        }
    }
    for(int i=1;i<n;i++){
        ans[i] += ans[i-1];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<vector<int>> bookings(n,vector<int> (3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>bookings[i][j];
        }
    }
    int nFlights;
    cout<<"Enter no of flights : ";
    cin>>nFlights;
    vector<int> ans = totalSeats(bookings,nFlights);
    for(auto ele : ans) cout<<ele<<" ";
}