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
            std::string first_name;
            std::string last_name;
            double weight;
            double height;
            double health;
            int skill;
        
        // Methods
        // Possible operations on the data
        public:
        // Constructors
            Player(std::string first_name = "NA" , std::string last_name = "NA" , double weight = 0.0 , double height = 0.0);

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