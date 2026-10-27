#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;

    Bike (int tS, int eS) : tyreSize(tS), engineSize(eS){}
    Bike (int tS) : tyreSize(tS), engineSize(100){}
    Bike () : tyreSize(12), engineSize(150){}
};
int main(){
    Bike bmw(11, 350);
    Bike active(9);
    Bike splendor;
    cout<<bmw.engineSize<<" "<<bmw.tyreSize<<endl;
    cout<<active.engineSize<<" "<<active.tyreSize<<endl;
    cout<<splendor.engineSize<<" "<<splendor.tyreSize<<endl;
}