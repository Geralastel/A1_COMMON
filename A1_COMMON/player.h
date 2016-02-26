#pragma once
#include <string>
using namespace std;

class Player {
    
public:
    string get_company_name();
    int get_color();
    int get_elektro();
    void set_color(int k);
    void set_elektro(int k);
    void set_company_name(string input);
    Player(string company_name,int color,int elektro); // color will be between 0-5 each # associated with a color

private:
    int color;
    string company_name;
    int elektro;
};


    
    
    
