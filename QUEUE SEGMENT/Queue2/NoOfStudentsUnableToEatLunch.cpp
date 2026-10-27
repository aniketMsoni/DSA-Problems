#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int countStudents(vector<int>& students, vector<int>& sandwiches) {
    queue<int> q;
    int n = students.size();
    for(int i=0;i<n;i++){
        q.push(students[i]);
    }
    int i = 0;
    int count = 0;
    while(q.size()>0 && count!=q.size()){
        if(q.front()==sandwiches[i]){
            count = 0;
            i++;
            q.pop();
        }
        else{
            count++;
            q.push(q.front());
            q.pop();
        }
    }
    return q.size();
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter students sandwich preference -------\nEnter 0 for circular sandwich and 1 for square sandwich\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<countStudents(arr,arr1);
    return 0;
}