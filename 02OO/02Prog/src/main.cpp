#include "../include/Player.h"

int main(void)
    {
        Player* player1 = new Player;
        player1->set_player_name( "Sai", "Karthik");
        player1->get_player_name();
        Player* player2 = new Player("Aditya" , "Nag" , 75.0 , 5.10);
        player2->talk("Hello");
        player2->get_player_weight();
        Player* player3 = new Player(); 
        delete player1;
        delete player2;
        delete player3;
        return 0;
    }