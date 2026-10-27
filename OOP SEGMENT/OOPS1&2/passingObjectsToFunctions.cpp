#include<iostream>
using namespace std;
class Player{
private:
    int health;
    int score;
    bool aliveStatus;
    string name;
    
public:
    // Setter
    void setHealth(int health){
        this->health = health;
    }
    void setScore(int score){
        this->score = score;
    }
    void setName(string name){
        this->name = name;
    }
    void setAliveStatus(bool aliveStatus){
        this->aliveStatus = aliveStatus;
    }
    // Getter
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    string getName(){
        return name;
    }
    bool getaliveStatus(){
        return aliveStatus;
    }
};
int addScore(Player p, Player q){
    return p.getScore() + q.getScore();
}
Player getMaxScorePlayer(Player p, Player q){
    if(p.getScore() > q.getScore()) return p;
    else return q;
}
int main(){
    Player Chironji;
    Chironji.setAliveStatus(1);
    Chironji.setHealth(89);
    Chironji.setName("Chironji Lal");
    Chironji.setScore(1000);
    //cout<<"UserName : "<<p.getName()<<endl<<"Score : "<<p.getScore()<<endl<<"Health : "<<p.getHealth()<<endl<<"Alive status : "<<p.getaliveStatus();
    
    Player Abdul;
    Abdul.setAliveStatus(1);
    Abdul.setHealth(100);
    Abdul.setName("Abdul Quereshi");
    Abdul.setScore(850);
    
    cout<<addScore(Chironji,Abdul)<<endl;
    Player Anthony = getMaxScorePlayer(Chironji,Abdul);
    cout<<Anthony.getScore();
    return 0;
}