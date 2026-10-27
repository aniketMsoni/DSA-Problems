#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;

    Bike (int tS, int eS) : tyreSize(tS), engineSize(eS){}
};
int main(){
    Bike bmw(15,250);
    cout<<bmw.tyreSize<<" "<<bmw.engineSize;

}