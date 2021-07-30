#include "Player.h"

int main(void)
    {
        Player* player1 = new Player;
        player1->set_player_name( "Sai", "Karthik");
        player1->get_player_name();
        Player player2;
        player2.set_player_name( "Karthik", "Nagadevara");
        player2.get_player_name();        
        return 0;
    }