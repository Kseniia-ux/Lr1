#include "pch.h"
#include <iostream>
#include "math.h"
extern double x, f;
using namespace std;
void function();

void main()
{

	function();
	cout << "x = " << x << "; f = " << f << endl;
	cin >> x;
	function();
	cout << "x = " << x << "; f = " << f << endl;
}
