#include <iostream>
#include <string>
#include <math.h>

#include <string>
using namespace std;

int main()
{

	int banknotes[5] = { 50, 20, 10, 5, 1 };
	string sbanknotes[5] = { " 50", " 20", " 10", " 5", " 1" };
	int amount;
	string result;
	cout << "Enter an amount: ";
	cin >> amount;
	if (amount > 0)
	{
		for (int i=0;i<5;i++)
		{
			if (amount >= banknotes[i])
			{
			    while(amount>=banknotes[i])
			    {
				amount -= banknotes[i];
				result += sbanknotes[i];
			    }
			}
			
		}
		cout << result;
	}
	else
	{
		cout << "You entered invalid data";
	}

	return 0;

}
