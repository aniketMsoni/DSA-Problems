#include<iostream>
#include<string>
using namespace std;
int mazePath(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = mazePath(sr,sc+1,er,ec);
    int downWays = mazePath(sr+1,sc,er,ec);
    return rightWays + downWays;
}
void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){ // destination reached
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R'); // right
    printPath(sr+1,sc,er,ec,s+'D'); // down
}
int main(){
    cout<<"Total no of ways to reach destination are : "<<mazePath(1,1,3,3)<<endl;
    printPath(1,1,3,3,"");
    return 0;
}