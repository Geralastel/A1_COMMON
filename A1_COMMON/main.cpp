#include "player.h"
#include "house.h"
#include "resources.h"
#include <iostream>
#include <string>

int main() {
   
    Player p1 ("Richard","red");
    p1.player_info();
    Coal c1 (1,2);
    cout <<c1.get_quantity()<< c1.get_type()
    << c1.get_color() << c1.get_shape() << endl;
    
    c1.set_color("blue");
    cout <<c1.get_color()<<endl;
    p1.info_card();
    return 0;
}