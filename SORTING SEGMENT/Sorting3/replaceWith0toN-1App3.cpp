#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x = 0;
    vector<int> isVisited(n,0); // 0 means not visited
    for(int i=0;i<n;i++){
        int mindx = -1;
        int min = INT_MAX;
        for(int j=0;j<n;j++){
            if(isVisited[j]==1) continue;
            else{
                if(arr[j]<min){
                    min = arr[j];
                    mindx = j;
                }
            } 
        }
        arr[mindx] = x;
        isVisited[mindx] = 1;
        x++;
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}