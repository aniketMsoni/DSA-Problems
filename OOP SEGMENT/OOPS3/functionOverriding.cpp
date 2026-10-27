#include<iostream>
using namespace std;
class A{
private:
    int a_ka_private;
protected:
    int a_ka_protected;
public:
    int a_ka_public;
    void show(){
        cout<<"A wala show hai yeh!!"<<endl;
    }
};
class B : public A{
public:
    int b_ka_public;
    void show(){
        cout<<"Aham B show asmi!!"<<endl;
    }
};
int main(){
    A a;
    a.show();
    cout<<endl;
    B b;
    b.show();
    cout<<endl;
    b.A::show();
    return 0;
}