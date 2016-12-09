#pragma once
#include<iostream>
using namespace std;
struct Pixel {
int x,y,rgb;
};

ostream& operator<<(ostream& o, Pixel& z);
istream& operator>>(istream& i, Pixel& z);
void print_pixel(void*n);
