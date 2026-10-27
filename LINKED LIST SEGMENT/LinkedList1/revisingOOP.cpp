#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    float percentage;
    int rno;
    // Student (string name, float percentage, int rno){
    //     this->name = name;
    //     this->percentage = percentage;
    //     this->rno = rno;
    // }
};
void change(Student* s){
    s->name = "Veeru";
}
int main(){
    // Student s("Harish", 87.6, 132);
    Student s;
    s.name = "Shobhit";
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name;
}