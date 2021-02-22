#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	double x = 8, f;
	f = tan(2 * x) + 1 / cos(2 * x);
	cout << "x = " << x << "; f = " << f << endl;
	cin >> x;
	f = tan(2 * x) + 1 / cos(2 * x);
	cout << "x = " << x << "; f = " << f << endl;
}
