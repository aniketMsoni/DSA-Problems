#include<iostream>
using namespace std;
class demo{
public:
    const int rollNumber;
    int age;

    demo(int r, int a) : rollNumber(r), age(a){}
};
int main(){
    // const int a = 10;
    // cout<<a;
    demo d(132, 21);
    cout<<d.age<<" "<<d.rollNumber<<endl;
    return 0;
}