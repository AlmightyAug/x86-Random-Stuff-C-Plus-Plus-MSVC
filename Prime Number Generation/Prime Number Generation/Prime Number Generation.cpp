//Prime Number Generation

#include "stdafx.h"
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	long long int x;
	cout << "What is the maximum number that you want this prime number generator to produce? \n";
	cin >> x;
	cout << endl << endl << endl;
	cout << "Prime Numbers Generated below: \n";


	int a = 0;       //start from 0
	long long int b = x;     //ends at 'x'

	for (int i = a; i <= b; i++)
	{

		for (int j = 2; j <= i; j++)
		{
			if (!(i%j) && (i != j))    //Condition for Non-Prime Numbers
			{
				break;
			}

			if (j == i)             //Condition for Prime Numbers
			{
				cout << setprecision(100) << i << endl;

			}
		}

		

	}
	system("PAUSE");
}