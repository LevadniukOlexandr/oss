#include <iostream>

using namespace std;

int main()
{
	cout << "Enter your number: ";

    int value;
	double number;
	double sum;
	
	
	cin >> sum;

	label1:

    cout << "MENU\n 0 - exit \n 1 - addition \n 2 - subtraction \n 3 - multiplication \n 4 - division \n Your choice?: ";
    
    cin >> value;

	switch (value)
	{
	case 0:
		goto label2;
		break;

	case 1:
		cout << sum << " + ";
		cin >> number;
		sum = sum + number;
		goto label1;
		break;

	case 2:
		cout << sum << " - ";
		cin >> number;
		sum = sum - number;
		goto label1;
		break;
		
	case 3:
		cout << sum << " * ";
		cin >> number;
		sum = sum * number;
		goto label1;
		break;

	case 4:
		cout << sum << " / ";
		cin >> number;
		if (number == 0)
		{
			cout << "error";
			goto label1;
		}
		sum = sum / number;
		goto label1;
		break;

	default:
		cout << "error";
		break;
	}

	label2:

	cout << "result = " << sum;


	return 0;
}

