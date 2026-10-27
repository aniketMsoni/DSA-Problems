#include<iostream>
using namespace std;
class ComplexNumber{
public:
    int real;
    int imaginary;

    ComplexNumber operator +(ComplexNumber &a1){
        ComplexNumber a3;
        a3.real = a1.real + this->real;
        a3.imaginary = a1.imaginary + this->imaginary;
        return a3;
    }

    ComplexNumber operator -(ComplexNumber &a1){
        ComplexNumber a3;
        a3.imaginary = a1.imaginary - this->imaginary;
        a3.real = a1.real - this->real;
        return a3;
    }
};
int main(){
    ComplexNumber a1, a2;
    a1.imaginary = 10;
    a1.real = 5;
    a2.imaginary = 2;
    a2.real = 3;
    
    ComplexNumber a3 = a1 + a2; // a1.add(a2);
    ComplexNumber a4 = a1 - a2; // a1.minus(a2);
    cout<<a3.real<<" + "<<a3.imaginary<<"i"<<endl;
    cout<<a4.real<<" + "<<a4.imaginary<<"i";
    return 0;
}