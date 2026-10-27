#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;

    Bike (int tS, int eS) : tyreSize(tS), engineSize(eS){}
};
void calculateArea(int l, int b){
    cout<<l * b<<endl;
}
void calculateArea(int s){
    cout<<s * s<<endl;
}
void calculateArea(double r){
    cout<<3.14 * r * r<<endl;
}
int main(){
    calculateArea(10,20); // rectangle
    calculateArea(15); // square
    calculateArea(10.0); // circle
}