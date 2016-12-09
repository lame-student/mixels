#include "pixel.h"

ostream& operator<<(ostream& o, Pixel& z)
{
	o << "( " << z.x << " " << z.y << " " << z.rgb << " )" << endl;
	return o;
}

istream& operator>>(istream& i, Pixel& z)
{
	char c;
	i >> c >> z.x >> z.y >> z.rgb >> c;
	return i;
}

void print_pixel(void*n)
{
	Pixel*pn = (Pixel*)n;
	cout << (*pn);
}
