#include <iostream>
#include <string>
#include "../include/Player.h"

void Player::set_player_name(std::string first_name, std::string last_name)
    {
        this->first_name = first_name;
        this->last_name = last_name;
    }

std::string Player::get_player_name()
    {   
        std::string full_name  = this->last_name + " " + this->first_name;
        return full_name;
    }

void Player::talk(std::string const say_this)
    {
        std::cout << this->first_name << " says " << say_this << std::endl;
    }

bool Player::can_Run(int skill)
    {
        if(this->skill > 40)
            return true;
        else
            return false;
    }

bool Player::is_dead(double health)
    {
        if(this->health > 0.05)
            return true;
        else
            return false;        
    }

void Player::set_player_weight(double weight) { this->weight = weight; }
double Player::get_player_weight() { return this->weight; }

void Player::set_player_height(double height) { this->height = height; }
double Player::get_player_height() { return this->height; }

 Player::Player()
        : Player {"NA" , "NA" , 0.0 , 0.0} {}
        
 Player::Player(std::string first_name, std::string last_name)
        : Player {first_name , last_name , 0.0 , 0.0} {}

 Player::Player(std::string first_name, std::string last_name , double weight , double height)
        : first_name{first_name} , last_name{last_name} , weight{weight} , height{height}
    {
        std::cout << "Created! " 
                  << "Name: "   << this->get_player_name()
                  << "Weight: " << this->get_player_weight()
                  << "Height: " << this->get_player_height()
                  << std::endl;
    }

 Player::~Player()
    {
        std::cout << "Destructor Called on: " 
                  << "Name: "   << this->get_player_name()
                  << std::endl;
    }
