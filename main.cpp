#include <iostream>
#include "blackjack.h"
using namespace std;
int main(){
    cout<<"\tWelcome to the Comp322 Blackjack game!"<<endl<<endl;
    BlackJackGame game;

    //the main loop of the game
    bool playAgain = true;
    char answer = 'y';
    while(playAgain){
        game.play();//there are corrupted pointer error that I cannot successfully debug

        //check whether the player would like to play another round
        cout<<"Would you like another round? (y/n): ";
        cin >> answer;
        cout<<endl<<endl;
        playAgain = (answer == 'y' ? true : false);
    }
    cout << "Gave over!";
    return 0;

}