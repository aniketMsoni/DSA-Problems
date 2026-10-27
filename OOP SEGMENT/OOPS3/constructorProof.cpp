#include<iostream>
#include<string>
using namespace std;
class Bike{
public:
    int tyreSize;
    Bike (){ // constructor
        cout<<"Constructor call hua"<<endl;
    }
    Bike (int tyreSize){
        this->tyreSize = tyreSize;
    }
};
int main(){
    Bike tvs(12);
    Bike honda(14);
    Bike royalEnfield(15);
    cout<<tvs.tyreSize<<endl;
    cout<<honda.tyreSize<<endl;
    cout<<royalEnfield.tyreSize<<endl;
    return 0;
}