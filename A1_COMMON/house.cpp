#include "house.h"
#include <string>
using namespace std;

string House::get_house_color(){
    return house_color;
}

int House::houses_owned(){
    return houses;
}

void House::set_color(int k){
    color = k;
}

void House::set_houses(int k){
    houses = k;
}

void House::set_house_color(string in){
    house_color = in;
}

string House::color_bank(int color){
    if (int player_number = 0)
        house_color = "blue";
    if (int player_number = 1)
        house_color = "red";
    if (int playe_number = 2)
        house_color = "green";
    if (int player_number = 3)
        house_color = "yellow";
    if (int player_number = 4)
        house_color = "purple";
    if (int player_number = 5)
        house_color = "orange";
    return house_color;
}

House::House(int houses,int color){
    set_houses(houses);
    set_color(color);
}