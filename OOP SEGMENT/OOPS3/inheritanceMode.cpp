#include<iostream>
using namespace std;
class A{
private:
    int a_ka_private;
protected:
    int a_ka_protected;
public:
    int a_ka_public;
};
class B : protected A{
private:
    int b_ka_private;
protected:
    int b_ka_protected;
public:
    int b_ka_public;
    void show(){
        a_ka_protected = b_ka_public;
        cout<<a_ka_protected<<endl;
    }
};
int main(){
    B b;
    //b.a_ka_public = 10;
    b.b_ka_public = 29;
    b.show();
}