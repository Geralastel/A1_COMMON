#include "house.h"
#include <string>
using namespace std;

string House::get_color(){
    return house_color;
}

int House::get_houses(){
    return number_of_houses;
}


void House::set_houses(int k){
    number_of_houses = k;
}

void House::set_color(string in){
    house_color = in;
}

// add method that takes current value and adds k houses to it
int House::add_house(int added_houses){
    number_of_houses += added_houses;
    return number_of_houses;
}

House::House(){
    number_of_houses = 0;
    house_color = "NA";
}

House::House(int houses,string color){
    set_houses(houses);
    set_color(color);
}
