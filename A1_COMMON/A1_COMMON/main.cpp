#include "player.h"
#include "house.h"
#include "resources.h"
#include <iostream>
#include <string>

int main() {
    
    Coal p1 (1,2);
    cout <<p1.get_quantity()<< p1.get_type()
    << p1.get_color() << p1.get_shape() << endl;
    
    p1.set_color("blue");
    cout <<p1.get_color()<<endl;
    return 0;
}