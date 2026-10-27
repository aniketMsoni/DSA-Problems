#include<iostream>
#include<vector>
using namespace std;
class Player{
    public:
    int score;
    int health;
};
int main(){
    Player player[10];

    Player Aniket;
    Aniket.score = 5110;
    Aniket.health = 79;

    Player Udit;
    Udit.score = 4000;
    Udit.health = 67;

    Player Osama;
    Osama.score = 7860;
    Osama.health = 0;

    Player Nirav;
    Nirav.score = 4560;
    Nirav.health = 89;

    player[0] = Aniket;
    player[1] = Udit;
    player[2] = Osama;
    player[3] = Nirav;

    for(int i=0;i<3;i++){
        cout<<player[i].health<<endl;
        cout<<player[i].score<<endl;
    }
    return 0;
}