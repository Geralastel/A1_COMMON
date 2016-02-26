#pragma once
#include <string>
#include "resources.h"
using namespace std;

class Player {
    
public:
  
    string get_company_name();
    string get_color();
    int get_elektro();
    int add_elektro(int k);
    void set_color(int k);
    void set_elektro(int k);
    void set_company_name(string input);
    void set_number_of_players(int k);
    void info_card();
    void player_info();
    Player();
    ~Player();
    Player(string company_name,string color);
    
private:
    
    int number_of_players;
    string color;
    string company_name;
    int elektro;
    Resources *resources[4];
};


    
    
    
