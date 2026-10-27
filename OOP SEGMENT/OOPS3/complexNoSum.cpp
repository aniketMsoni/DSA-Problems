#include<iostream>
using namespace std;
class ComplexNumber{
public:
    int real;
    int imaginary;
    ComplexNumber add(ComplexNumber &a1){
        ComplexNumber a2;
        a2.imaginary = this->imaginary + a1.imaginary;
        a2.real = this->real + a1.real;
        return a2;
    }
};
int main(){
    ComplexNumber a1, a2;
    a1.real = 5,
    a1.imaginary = 10;
    a2.real = 3;
    a2.imaginary = 2;

    ComplexNumber a3 = a1.add(a2);
    cout<<"Real is : "<<a3.real<<"\nImaginary is : "<<a3.imaginary<<endl;
    return 0;
}