#include<bits/stdc++.h>
using namespace std;
double getMedian(priority_queue<int>& left, priority_queue<int, vector<int>, greater<int>>& right, int x, int y){
    int totalSize = x + y;
    if(totalSize % 2 == 0) return right.top();
    else return (left.top() + right.top()) / 2;
}
bool isBalanced(int x, int y){
    return (x == y) || (x + 1 == y);
}
vector<double> slidingMedian(vector<int>& arr, int n, int k){
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    int x = 0, y = 0;
    right.push(arr[0]);
    y++;
    for(int i=1;i<n;i++){
        int curr = arr[i];
        double med = getMedian(left, right, x , y);
        if(curr < med){ // go left
            left.push(curr);
            x++;
            if(!isBalanced(x, y)){
                int toberemoved = left.top();
                left.pop();
                right.push(toberemoved);
                x--;
                y++;
            }
        }
        else{ // go right
            right.push(curr);
            y++;
            if(!isBalanced(x, y)){
                int toberemoved = right.top();
                right.pop();
                left.push(toberemoved);
                y--;
                x++;
            }
        }
    }
    // After the for loop, we have the answer for 1st k size window
    double m = getMedian(left, right, x , y);
    vector<double> result;
    unordered_map<int,int> mp;
    result.push_back(m);
    for(int i=k;i<n;i++){
        int newElementIndex = i;
        int oldElementToBeDeleted = i - k;
        double med = getMedian(left, right, x, y);
        if(arr[newElementIndex] > med){
            // go right
            right.push(arr[newElementIndex]);
            y++;
            if(!isBalanced(x, y)){ // restructuring
                int toberemoved = right.top();
                right.pop();
                left.push(toberemoved);
                y--;
                x++;
            }
        }
        else{ // go left
            left.push(arr[newElementIndex]);
            x++;
            if(!isBalanced(x, y)){ // restructuring
                int toberemoved = left.top();
                left.pop();
                right.push(toberemoved);
                x--;
                y++;
            }
        }
        mp[arr[oldElementToBeDeleted]] = oldElementToBeDeleted;
        while(!left.empty() and mp[left.top()]){
            mp.erase(left.top());
            left.pop();
            x--;
            if(!isBalanced(x, y)){ // restructuring
                int toberemoved = right.top();
                right.pop();
                left.push(toberemoved);
                y--;
                x++;
            }
        }

        while(!right.empty() and mp[right.top()]){
            mp.erase(right.top());
            left.pop();
            y--;
            if(!isBalanced(x, y)){ // restructuring
                int toberemoved = left.top();
                left.pop();
                right.push(toberemoved);
                x--;
                y++;
            }
        }
        result.push_back(getMedian(left, right, x, y));
    }
    return result;
}
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}