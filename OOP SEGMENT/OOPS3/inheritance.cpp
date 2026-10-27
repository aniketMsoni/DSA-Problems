#include<iostream>
using namespace std;
class Vehicle{
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    Vehicle (){
        cout<<"Parent class constructor call hua"<<endl;
    }

    void show(){
        cout<<companyName<<endl;
    }
};
class Bike : public Vehicle{
public:
    int handleSize;
    Bike (){
        cout<<"Child class constructor call hua"<<endl;
    }
};
class Car : public Vehicle{
public:
    int steeringSize;
};
int main(){
    Bike honda;
    honda.lights = 4;
    honda.engineSize = 150;
    honda.tyreSize = 10;
    honda.handleSize = 7;
    honda.companyName = "HONDA";
    cout<<honda.tyreSize<<endl;
    honda.show();
    return 0;
}