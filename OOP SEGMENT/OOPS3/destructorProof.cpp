#include<iostream>
#include<string>
using namespace std;
class Bike{
public:
    int tyreSize;
    ~Bike (){ // constructor
        cout<<"Destructor call hua"<<endl;
    }
    Bike (int tyreSize){
        this->tyreSize = tyreSize;
    }
};
int main(){
    Bike tvs(12);
    Bike honda(14);
    Bike royalEnfield(15);
    bool flag = true;
    if(flag == true){
        Bike bmw(18);
        cout<<bmw.tyreSize<<endl;
    }
    cout<<tvs.tyreSize<<endl;
    cout<<honda.tyreSize<<endl;
    cout<<royalEnfield.tyreSize<<endl;
    return 0;
}