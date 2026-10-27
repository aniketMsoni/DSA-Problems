#include<iostream>
using namespace std;
class Player{
private:
    int health;
    int score;

public:
    void setHealth(int h){
        health = h;
    }
    void setScore(int s){
        score = s;
    }
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
};
int main(){
    Player harsh;
    harsh.setHealth(78);
    harsh.setScore(4532);
    cout<<"Health : "<<harsh.getHealth()<<endl;
    cout<<"Score : "<<harsh.getScore();
}