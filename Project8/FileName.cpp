#include <iostream>
#include <cmath>
double f(double num)
{
	return 2 * sin(num) - atan(num);
}


int main()
{
	double x, c, a = 2.5, b = 2.6, e = 0.001;
	while (true)
	{
		if (b - a > 2 * e)
		{
			c = (a + b) / 2;
		}
		else
		{
			x = (a + b) / 2;
			std::cout << "\nResult: " << x;
			break;
		}
		if (f(a) * f(c) < 0)
		{
			std::cout << "2 * sin("<< a << ") - atan(" << b << ") = ";
			std::cout << f(a) * f(c) << "\n";
			b = c;
		}
		else
		{
			a = c;
		}
	}
	
}