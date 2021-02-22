#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;
double function(double x);

void main()
{
	double x = 8, f;
	f = function(x);
	cout << "x = " << x << "; f = " << f << endl;
	cin >> x;
	f = function(x);
	cout << "x = " << x << "; f = " << f << endl;
}

double function(double x)
{
	return tan(2 * x) + 1 / cos(2 * x);
}
