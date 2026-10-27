#include<iostream>
#include<vector>
using namespace std;
class Cricketers{
private:
    string name;
    int age;
    int noOfMatches;
    double averageRun;
public:
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    void setnoOfMatches(int noOfmatches){
        this->noOfMatches = noOfmatches;
    }
    void setaverageRun(double averageRun){
        this->averageRun = averageRun;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getnoOfMatches(){
        return noOfMatches;
    }
    double getaverageRun(){
        return averageRun;
    }
};
int main(){
    vector<Cricketers> cricketers(20);
    int age, noOfMatches;
    string name;
    double averageRun;
    for(int i=0;i<20;i++){
        age = 0, noOfMatches = 0;
        name = "";
        averageRun = 0;
        Cricketers *Cricketer = new Cricketers;
        cout<<"Enter "<<i<<" th player name : ";
        cin>>name;
        cout<<"Enter "<<i<<" th player age : ";
        cin>>age;
        cout<<"Enter "<<i<<" th player no of matches : ";
        cin>>noOfMatches;
        cout<<"Enter "<<i<<" th player average runs : ";
        cin>>averageRun;
        Cricketer->setName(name);
        Cricketer->setAge(age);
        Cricketer->setnoOfMatches(noOfMatches);
        Cricketer->setaverageRun(averageRun);
        cricketers[i] = *Cricketer;
    }
    for(int i=0;i<20;i++){
        cout<<i<<" th player name: "<<cricketers[i].getName()<<endl;
        cout<<i<<" th player age: "<<cricketers[i].getAge()<<endl;
        cout<<i<<" th player no of matches played: "<<cricketers[i].getnoOfMatches()<<endl;
        cout<<i<<" th player average run scored: "<<cricketers[i].getaverageRun()<<endl;

    }
}