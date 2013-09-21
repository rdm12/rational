#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	Rat a = Rat(3, 7), b = Rat(-2, 1), c = Rat (8, 2), d;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	d = (a + b) * c / 2 * (c^3) + 2;
	cout << "d = " << d << endl;

	return 0;
}