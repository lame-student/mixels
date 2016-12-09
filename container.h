#pragma once
#include <iostream>
#include "pixel.h"
#include "linked_list.h"

struct Map{


};

struct Figure{
    linked_list pixels;
};

void add_figure (Figure*,Pixel*);
//ostream& operator<<(ostream& o, Figure& z);
//ostream& operator<<(ostream& o, Map& z);
