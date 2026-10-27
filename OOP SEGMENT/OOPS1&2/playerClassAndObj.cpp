#include<iostream>
using namespace std;
class player{
    public:
    int score;
    int health;
    string name;
};
int main(){
    player jatin;
    jatin.score = 3650;
    jatin.health = 75;
    jatin.name = "Osama Bin Laden";
    cout<<jatin.health<<endl;
    cout<<jatin.score<<endl;
    cout<<jatin.name;
    return 0;
}