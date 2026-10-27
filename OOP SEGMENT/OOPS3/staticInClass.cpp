#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    static int noOfBikes;
    Bike (int tyreSize, int engineSize = 200){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
    static void increaseNoOfBikes(){
        noOfBikes++;
    }
};
int Bike::noOfBikes = 10;
int main(){
    Bike royalEnfield(15,350);
    Bike bajaj(13);

    cout<<royalEnfield.noOfBikes<<endl;
    cout<<bajaj.noOfBikes<<endl<<endl;

    royalEnfield.increaseNoOfBikes();
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<bajaj.noOfBikes<<endl<<endl;

    bajaj.increaseNoOfBikes();
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<bajaj.noOfBikes<<endl<<endl;

    Bike::increaseNoOfBikes();
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<bajaj.noOfBikes<<endl;
    //cout<<royalEnfield.engineSize<<" "<<royalEnfield.tyreSize;
}