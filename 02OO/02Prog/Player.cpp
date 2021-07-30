#include <iostream>
#include <string>
#include "Player.h"


void Player::set_player_name(std::string first_name, std::string last_name)
    {
        Player::first_name = first_name;
        Player::last_name = last_name;
    }

std::string Player::get_player_name()
    {   
        std::string full_name  = last_name + " " + first_name;
        std::cout << "First Name: " << first_name << " "
             << "Last Name: " << last_name << std::endl;
        return full_name;
    }

void Player::talk(std::string const say_this)
    {
        std::cout << first_name << " says " << say_this << std::endl;
    }

bool Player::can_Run(int skill)
    {
        if(skill > 40)
            return true;
        else
            return false;
    }

bool Player::is_dead(double health)
    {
        if(health > 0.05)
            return true;
        else
            return false;        
    }


void Player::set_player_weight(double weight)
    {
        weight = weight;
    }

double Player::get_player_weight()
    {
        std::cout << "Player Weight: " << weight << std::endl;
        return weight;
    }

void Player::set_player_height(double height)
    {
        height = height;
    }

double Player::get_player_height()
    {
        std::cout << "Player Height:" << height << std::endl;
        return height;
    }
