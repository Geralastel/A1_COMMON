#pragma once

class House {
    
public:
    int houses_owned();
    string get_color();

    string color_bank(int k);
    House(int houses,int color);

    
private:
    int color;
    int houses;
    string house_color;
};
