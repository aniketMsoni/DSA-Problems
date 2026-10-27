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

class B : protected A{ // a_ka_protected and a_ka_public as protected
public:
    int b_ka_public;
    void show(){
        a_ka_protected = 10;
    }
    B(){
        cout<<"B ka constructor call hua"<<endl;
    }
};

class C : public B{ // b_ka_public as public, a_ka_protected and a_ka_public as protected
public:
    int c_ka_public;
    void show(){
        cout<<c_ka_public<<endl;
    }
    C(){
        cout<<"C ka constructor call hua"<<endl;
    }
};
int main(){
    // B b;
    //b.a_ka_public = 10;
    // b.b_ka_public = 29;
    // b.show();
    C c;
}