#include "linked_list.h"
#include "pixel.h"
#include <iostream>
#include <fstream>

ofstream f;
void foo(void*p)
{
    int pi = (int)p;
    f << (pi);
}

void bar(void*p)
{
    Pixel*pi = (Pixel*)p;
    f << pi->x << " " << pi->y << " " << pi->rgb;
}

int main()
{
    linked_list* first=init();
    Pixel pix1, pix2, pix3;

    pix1.x = 1;
    pix1.y = 2;
    pix1.rgb = 0xFFFFFF;

    pix2.x = 3;
    pix2.y = 4;
    pix2.rgb = 0xFFFFFF;

    pix3.x = 4;
    pix3.y = 3;
    pix3.rgb = 0xFFFFFF;

    add(first,0,&pix1);
    add(first,0,&pix2);
    add(first,0,&pix3);
    print(first,print_pixel);
    cout << endl;
    remove(first, 2);
    print(first,print_pixel);
    cout << endl;
    remove(first, 1);
    print(first,print_pixel);
    cout << endl;
    remove(first, 0);
    print(first,print_pixel);
    cout << endl;
    Pixel p;

    cin >> p;
    print_pixel(&p);
    cout<<p;
    operator<<(cout, p);

    ofstream f("test.txt");
    f << p;
    f.close();
    //linkedlist root;
    //print(root, foo);
}
