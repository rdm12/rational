#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	Rat a = Rat(1000, 2000), b = Rat(-2, 1), c = Rat (-3, -4), d;

	d = (a + b) * c / 2 * (c^3) + 2;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	return 0;
}