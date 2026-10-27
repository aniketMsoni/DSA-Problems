//Finding difference between the sum of elements at even indices to the sum of elements at odd indices
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sumOdd = 0;
    int sumEven = 0;
    for(int i=0;i<v.size();i++){
        if(i%2!=0){
            sumOdd = sumOdd + v.at(i);
        }
        else{
            sumEven = sumEven + v.at(i);
        }
    }
    int diff = sumOdd - sumEven;
    cout<<"Difference between sum of elements at even indices to the sum of elements at odd indices is : "<<diff;
    return 0;
}