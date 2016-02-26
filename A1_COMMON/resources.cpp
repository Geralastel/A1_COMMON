#include "resources.h"
#include <string>
using namespace std;


//Default constructor
Resources::Resources(string color,string type,string shape,int cost,int quantity){
    
    this->color = color;
    this->type = type;
    this->shape = shape;
    this->cost = cost;
    this->quantity = quantity;
};



// getters for resources

string Resources::get_color(){
    return color;
}

string Resources::get_shape(){
    return shape;
}

string Resources::get_type(){
    return type;
}

int Resources::get_cost(){
    return cost;
}

int Resources::get_quantity(){
    return quantity;
}

// setters for class Resources
void Resources::set_color(string input){
    color = input;
}

void Resources::set_shape(string input){
    shape = input;
}

void Resources::set_type(string input){
    type = input;
}

void Resources::set_cost(int k){
    cost = k;
}

void Resources::set_quantity(int k){
    quantity = k;
}


