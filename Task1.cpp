
#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;
double summ(int n)
	{
		double a = 0;
		double sum = 0;
		for (int i = 0; i <= n; i++)
		{
			a = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
			sum += a;
		cout << "n=" << i << "    " << "f=" << a << "\n";
		}
		return sum;
	}
