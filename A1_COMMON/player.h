#pragma once
#include <string>
using namespace std;

class Player {
    
public:
    string get_company_name();
    int resource_overview();
    int get_color();
    void set_color(int k);
    Player(string company_name,int color); // color will be between 0-5 each # associated with a color

private:
    int color;
    string company_name;
};


    
    
    
