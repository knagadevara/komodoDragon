#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

/*
To guard your header to include the file only once while compiling use 
header-guard
 #ifndef _PLAYER_H_
 #define _PLAYER_H_
 #endif
    or 
 #pragma once
*/

class Player
    {
        // Attributes
        // Data
        private:
            std::string first_name {"Player-First-Name"};
            std::string last_name {"Player-Last-Name"};
            double height {};
            double weight {};
            double health {};
            int skill {};
        
        // Methods
        // Possible operations on the data
        public:
        // Constructors
            Player();
            Player(std::string first_name, std::string last_name);
            Player(std::string first_name, std::string last_name , double weight , double height);

        // Destructor
            ~Player();

        // Other Member Functions
            void talk(std::string const say_this);

            void set_player_name(std::string first_name, std::string last_name);
            std::string get_player_name();

            void set_player_weight(double weight);
            double get_player_weight();

            void set_player_height(double height);
            double get_player_height();

            bool can_Run(int skill);
            bool is_dead(double health);
    
    };

#endif