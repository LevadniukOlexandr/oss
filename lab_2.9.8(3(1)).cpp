#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	
	int vector[] = { 5, 7, 3, 7, 3, 7, 5 };
	bool ispalindrome = true;
	int n = sizeof(vector) / sizeof(vector[0]);
    int j=n;
	for (int i = 0; i < n / 2; i++)
	{
	    j--;
		if (vector[i] == vector[j])
		    continue;
	    ispalindrome = false;
	}
	if (ispalindrome)
		cout << "It's a palindrome";
	else
		cout << "It isn't a palindrome";
	cout << endl;

	
	return 0;

}
