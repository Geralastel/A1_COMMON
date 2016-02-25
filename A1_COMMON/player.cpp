#include "player.h"
#include "house.h"
#include "money.h"
#include "resources.h"

Money::Money(int k){
        elektro = k;
};

Money::Money(){
    elektro = 0;
}

House::House(int houses,int color){
    this->houses = houses;
    this->color = color;
};

string House::color_bank(int player_number){
    if (int player_number = 00)
        house_color = "blue";
    if (int player_number = 01)
        house_color = "red";
    if (int playe_number = 02)
        house_color = "green";
    if (int player_number = 03)
        house_color = "yellow";
    if (int player_number = 04)
        house_color = "purple";
    if (int player_number = 05)
        house_color = "orange";
    return house_color;
}

Resources::Resources(int c,int o,int g,int u){
    coal = c;
    oil = o;
    garbage = g;
    uranium = u;
};





Player::Player(string company_name,int color){
    this->company_name = company_name;
    this->color = color;
}






