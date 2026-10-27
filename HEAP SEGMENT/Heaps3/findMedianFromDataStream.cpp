#include<bits/stdc++.h>
using namespace std;
class MedianFinder {
public:
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left.size()==0 || num < left.top()) left.push(num); 
        else right.push(num); 
        if(left.size()-right.size() == 2){
            int temp = left.top();
            left.pop();
            right.push(temp);
        }
        if(right.size()-left.size() == 2){
            int temp = right.top();
            right.pop();
            left.push(temp);
        }
    }
    
    double findMedian() {
        if(left.size() != right.size()){
            if(left.size() > right.size()) return left.top();
            else return right.top();
        }
        else return (left.top() + right.top())/2.0;
    }
};

int main(){
    vector<int> v = {6,1,2,4};
    MedianFinder m;
    m.addNum(6);
    cout<<m.findMedian()<<endl;
    m.addNum(1);
    cout<<m.findMedian()<<endl;
    m.addNum(2);
    cout<<m.findMedian()<<endl;
    m.addNum(4);
    cout<<m.findMedian()<<endl;
}