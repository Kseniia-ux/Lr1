#include "pch.h"
#include <iostream>
#include "math.h"
double x = 8, f;
using namespace std;
void function()
{
	f=tan(2 * x) + 1 / cos(2 * x);
}
void main()
{
	
	 function();
	cout << "x = " << x << "; f = " << f << endl;
	cin >> x;
    function();
	cout << "x = " << x << "; f = " << f << endl;
}
