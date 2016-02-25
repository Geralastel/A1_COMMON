#pragma once


class Resources {
    
public :
    int get_coal();
    int get_oil();
    int get_garbage();
    int get_uranium();
    Resources(int c,int o,int g,int u);
    void set_coal(int k);
    
private :
    int coal;
    int oil;
    int garbage;
    int uranium;
};
