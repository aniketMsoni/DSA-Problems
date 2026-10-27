// Finding Pairs with a Certain Sum [LC1865]
#include<iostream>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<climits>
#include<unordered_set>
using namespace std;
class FindSumPairs {
public:
    vector<int> arr;
    unordered_map<int,int> m1;
    unordered_map<int,int> m2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        arr = nums2;
        for(int ele : nums1) m1[ele]++;
        for(int ele : nums2) m2[ele]++;
    }
    
    void add(int index, int val) {
        m2[arr[index]]--;
        int temp = arr[index];
        arr[index] += val;
        m2[arr[index]]++;
    }
    
    int count(int tot) {
        int count = 0;
        for(auto x : m1){
            int num = x.first;
            int rem = tot - num;
            if(m2.find(rem) != m2.end()){
                count += (m1[num] * m2[rem]);
            }
        }
        return count;
    }
};
int main(){
    vector<int> arr1 = {1, 1, 2, 2, 2, 3};
    vector<int> arr2 = {1, 4, 5, 2, 5, 4};
    FindSumPairs s(arr1, arr2);
}