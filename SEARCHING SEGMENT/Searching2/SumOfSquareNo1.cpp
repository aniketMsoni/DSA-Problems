#include<iostream>
#include<cmath>
using namespace std;
bool isPerfectSquare(int x){ // O(1)
        int res = sqrt(x);
        if(res*res==x) return true;
        else return false;
    }
    bool judgeSquareSum(int c){
        int x = 0;
        int y = c;
        while(x<=y){
            if(isPerfectSquare(x) && isPerfectSquare(y)) return true;
            else if(!isPerfectSquare(y)){
                y = (int)sqrt(y)*(int)sqrt(y);
                x = c-y;
            }
            else{ // x is not perfect square but y is 
                x = ((int)sqrt(x)+1)*((int)sqrt(x)+1);
                y = c-x;
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