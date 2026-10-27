#include<iostream>
using namespace std;

class ComplexNumber{
public:
    int real;
    int imaginary;

    friend ComplexNumber operator +(ComplexNumber &a1, ComplexNumber &a2);

    friend ComplexNumber operator -(ComplexNumber &a1, ComplexNumber &a2);
};

ComplexNumber operator +(ComplexNumber &a1, ComplexNumber &a2){
    ComplexNumber a3;
    a3.real = a1.real + a2.real;
    a3.imaginary = a1.imaginary + a2.imaginary;
    return a3;
}

ComplexNumber operator -(ComplexNumber &a1, ComplexNumber &a2){
    ComplexNumber a3;
    a3.imaginary = a1.imaginary - a2.imaginary;
    a3.real = a1.real - a2.real;
    return a3;
}

class A{
private:
    int a_private = 10;
    friend void show(A &a);
    friend class demo;
};

void show(A &a){
    cout<<a.a_private<<endl;
}

class demo{
public:
    void showJ(A &a){
        cout<<a.a_private<<endl;
    }
};

int main(){
    A a;
    show(a);
    demo d;
    d.showJ(a);

    ComplexNumber c1, c2;
    c1.real = 10;
    c2.real = 5;
    c1.imaginary = 5;
    c2.imaginary = 20;
    ComplexNumber c3 = c1 + c2;
    cout<<c3.real<<" + "<<c3.imaginary<<"i"<<endl;
    return 0;
}