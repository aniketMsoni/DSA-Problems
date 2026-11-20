#include<iostream>
using namespace std;
class A{
public:
    int a;
    int b;
    int c;
    virtual void show() = 0;
    void walk(){
        cout<<"A can walk";
    }
};
class B : public A{
public:
    void run(){
        cout<<"We are running!!"<<endl;
    }
    void show(){
        cout<<"E"<<endl;
    }
};
int main(){
    B b;
    b.show();
    b.walk();
}