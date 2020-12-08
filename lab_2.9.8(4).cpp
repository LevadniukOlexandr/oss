#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double arithmetic_mean = 0;
	double harmonic_mean = 0;
	double geometric_mean = 1;
	double root_mean_square = 0;
	
	
	for (int i = 0; i < n; i++)
	{
		arithmetic_mean += vector[i];
	}
	arithmetic_mean /= n;
	
	
	
	for (int i = 0; i < n; i++)
	{
		harmonic_mean += 1. / vector[i];
	}
	harmonic_mean = n / harmonic_mean;
	
	
	
	for (int i = 0; i < n; i++)
	{
		geometric_mean *= vector[i];
	}
	geometric_mean = pow(geometric_mean, 1./n);



	for (int i = 0; i < n; i++)
	{
		root_mean_square += pow(vector[i], 2);
	}
	root_mean_square = root_mean_square / n;
	root_mean_square = pow(root_mean_square, 1./2);
	
	cout << "Arithmetic Mean = " << arithmetic_mean << endl;
	cout << "Harmonic Mean = " << harmonic_mean << endl;
	cout << "Geometric Mean = " << geometric_mean << endl;
	cout << "RootMean Square = " << root_mean_square << endl;
	cout << endl;
	
	return 0;

}
