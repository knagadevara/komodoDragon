#include <iostream>
#include <string>
#include "Player.h"

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

void Player::set_player_weight(double weight)
    {
        this->weight = weight;
    }

double Player::get_player_weight()
    {
        std::cout << "Player Weight: " << this->weight << std::endl;
        return this->weight;
    }

void Player::set_player_height(double height)
    {
        this->height = height;
    }

double Player::get_player_height()
    {
        std::cout << "Player Height:" << this->height << std::endl;
        return this->height;
    }

 Player::Player()
        : weight{0.0} , height{0.0} , first_name{""} , last_name{""}
    {   
        std::cout << "Default Costructor Called" << std::endl;
    }

 Player::Player(std::string first_name, std::string last_name)
        : weight{0.0} , height{0.0}  
    {
        this->set_player_name(first_name, last_name);
        std::cout << "Created! " 
                  << "Name: "   << this->get_player_name()
                  << std::endl;
    }

 Player::Player(std::string first_name, std::string last_name , double weight , double height)
    {
        this->set_player_name(first_name, last_name);
        this->set_player_weight(weight);
        this->set_player_height(height);
    }

 Player::~Player()
    {
        std::cout << "Destructor Called on: " 
                  << "Name: "   << this->get_player_name()
                  << std::endl;
    }
