#include <iostream>
// #include <math.h>

using namespace std;

int main()
{
	int number;
	double res = 1;
	
	cout << "Enter a negative power: ";
	
	cin >> number;
	
	if (number > 0)
	{
		for (int i = 1; i <= number; i++)
		{
			res = res * 2;
		}
		
		res = 1. / res;
		
		cout.precision(20);
		cout << "2 in power " << number << " = " << res;
	}
	else if (number == 0)
	{
		cout << "2 in power 0 = 1 ";
	}
	else
	{
		cout << "You entered invalid number!";
	}

	
	return 0;
}
