#include "player.h"

//getters
int Player::get_color(){
    return color;
};
string Player::get_company_name(){
    return company_name;
};

int Player::get_elektro(){
    return elektro;
};

//setters
void Player::set_color(int k){
    color = k;
};

void Player::set_elektro(int k){
    elektro = k;
};

void Player::set_company_name(string input){
    company_name = input;
};

Player::Player(string company_name,int color,int elektro){
    this->company_name = company_name;
    this->color = color;
    this->elektro = elektro;
};






