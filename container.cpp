#include "container.h"


void add_figure (Figure* f1,Pixel* p1)
{
    int c=count(&(f1->pixels));
    add(&(f1->pixels),c,p1);
}

