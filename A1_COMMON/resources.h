#pragma once
#include <string>
using namespace std;

class Resources {
    
public :
    
    string get_color();
    string get_type();
    string get_shape();
    int get_cost();
    int get_quantity();
    
    void set_type(string input);
    void set_shape(string input);
    void set_color(string input);
    void set_cost(int k);
    void set_quantity(int k);

    Resources(string color,string type,string shape,int cost,int quantity);
 
    
protected :
    
    string type;
    string shape;
    string color;
    int cost;
    int quantity;
};

class Coal: Resources{
    
public:
    
    Coal();
    Coal(int cost);
    int get_cost();
    void set_coast(int cost);
    
  
};

class Oil : Resources{
    
public:
    
    Oil();
    int get_cost();
    void set_cost(int cost);
    
    
};

class Garbage : Resources{
    
public:
    
    Garbage();
    int get_cost();
    void set_cost(int cost);
    

  
};

class Uranium :Resources{
    
public:
    
    int get_cost();
    void set_cost(int cost);
    

 
};



