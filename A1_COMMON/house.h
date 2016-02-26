#pragma once
#include <string>
using namespace std;
class House {
    
public:
    int houses_owned();
    string get_house_color();
    void set_color(int k);
    void set_houses(int k);
    void set_house_color(string in);
    string color_bank(int k);
    House(int houses,int color);

    
private:
    int color;
    int houses;
    string house_color;
};
