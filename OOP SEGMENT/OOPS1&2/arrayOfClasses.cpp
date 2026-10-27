#include<iostream>
using namespace std;
class Gun{
public:
    int ammo;
    int scope;
    int damage;
};
class Player{
    class Helmet{
    private:
        int hp;
        int level;
    public:
        void setHp(int hp){
            this->hp = hp;        
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };

private:
    int health;
    int score;
    bool aliveStatus;
    int age;
    Gun gun;
    Helmet helmet;
    
public:
    // Setter
    void setHealth(int health){
        this->health = health;
    }
    void setScore(int score){
        this->score = score;
    }
    void setAge(int age){
        this->age = age;
    }
    void setAliveStatus(bool aliveStatus){
        this->aliveStatus = aliveStatus;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    // Getter
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    int getAge(){
        return age;
    }
    bool getaliveStatus(){
        return aliveStatus;
    }
    Gun getGun(){
        return gun;
    }

    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health = 0;
        if(level == 1) health = 25;
        else if(level == 2) health = 50;
        else if(level == 3) health = 100;
        else cout<<"Error, Invalid Level";
        helmet->setHp(health);  
        this->helmet = *helmet;  
    }
    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    }
};
int main(){
    Player Chironji;
    Gun akm;
    akm.ammo = 40;
    akm.damage = 50;
    akm.scope = 2;
    Chironji.setAliveStatus(1);
    Chironji.setHealth(89);
    Chironji.setAge(56);
    Chironji.setScore(1000);
    Chironji.setGun(akm);
    Chironji.setHelmet(3);
    
    Player Abdul;
    Gun awm;
    awm.ammo = 10;
    awm.damage = 150;
    awm.scope = 8;
    Abdul.setAliveStatus(1);
    Abdul.setHealth(100);
    Abdul.setAge(34);
    Abdul.setScore(850);
    Abdul.setGun(awm);
    Abdul.setHelmet(2);
    
    Player players[2];
    players[0] = Chironji;
    players[1] = Abdul;
    cout<<players[0].getAge()<<endl;
}