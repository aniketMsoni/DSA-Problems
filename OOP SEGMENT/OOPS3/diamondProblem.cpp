#include<iostream>
using namespace std;
class A{
private:
    int a_ka_private;
protected:
    int a_ka_protected;
public:
    int a_ka_public;
    A(){
        cout<<"A ka constructor call hua"<<endl;
    }
};

class B : virtual public A{ 
public:
    int b_ka_public;
    B(){
        cout<<"B ka constructor call hua"<<endl;
    }
};

class C : virtual public A{ // b_ka_public as public, a_ka_protected and a_ka_public as protected
public:
    int c_ka_public;
    C(){
        cout<<"C ka constructor call hua"<<endl;
    }
};
class D : public B, public C{    
public:
    int d_ka_public;
};
int main(){
    D d;
    d.a_ka_public = 10;
}