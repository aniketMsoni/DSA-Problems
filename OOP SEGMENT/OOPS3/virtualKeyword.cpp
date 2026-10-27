#include<iostream>
using namespace std;
class vehicle{
public:
    int lights;
    int tyreSize;
    int engineSize;
    string companyName;
    virtual void show(){
        cout<<"Vehicle ka show!!"<<endl;
    }
};
class Bike : public vehicle{
public:
    int handleSize;
    void show(){
        cout<<"Bike ka show!!"<<endl;
    }
};
int main(){
    Bike b;
    vehicle *a;
    a = new vehicle;
    a->show();
    a = new Bike;
    a->show();
}