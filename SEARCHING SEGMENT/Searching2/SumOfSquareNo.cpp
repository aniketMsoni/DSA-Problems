#include<iostream>
#include<cmath>
using namespace std;
bool perfectSq(int x){ // O(1)
        int res = sqrt(x);
        if(res*res==x) return true;
        return false;
    }
    bool judgeSquareSum(int c) {
        int n = c;
        int lo = 0;
        int hi = c;
        if(c==0) return true;
        bool flag = false;
        int root = 0;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            long long m = (long long)mid;
            if(m*m==n){
                root = mid;
                flag = true;
                break;
            }
            else if(m*m>n) hi = mid - 1;
            else lo = mid + 1;
        }
        if(flag==false) root = hi;
        while(root>0){
            int temp = c - root*root;
            bool check = perfectSq(temp);
            if(check==true) return true;
            else{ // c- root*root is not a perfect square
                root--;
            }
        }       
        return false;
} 
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool flag = judgeSquareSum(n);
    if(flag == false) cout<<"No, a and b are not possible to find";
    else cout<<"Yes, a and b exists";
    return 0;
}