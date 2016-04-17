/*
Author: lkyaugustine@gmail.com
		leekangyiaugustine@yahoo.com 
*/


#include "stdafx.h"
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int y;
	cout << "What is the maximum exponent that you want this mersenne prime number generator to produce? \n";
	cin >> y;
	cout << endl << endl << endl;
	cout << "Mersenne Prime Numbers Generated below: \n";


	int a = 0;       //start from 0
	long long int b = y;     //ends at 'y'
	int i;

	for (i = a; i <= b; i++)
	{

		for (int j = 2; j <= i; j++)
		{
			if (!(i%j) && (i != j))    //Condition for not prime
			{
				break;
			}

			if (j == i)             //condition for Prime Numbers
			{
				long long int x; // Number with lots of integer 

				//Loop so we don't have to write this particular program so many times
				for (i = 2; i <= y; i++) {
					x = pow(2, i) - 1;//Equation for Mersenne Prime Number

					for (int z = 2; z <= x; z++) { //just simply for loops and initialisation of the variable 'z'

						if (!(x%z) && (x != z))    //Condition for not prime
						{
							break;
						}

						if (x == z)             //condition for Prime Numbers
						{

							cout << setprecision(1000) << x << endl; //display the Mersenne Prime Number
							cout << endl;
						}
					}
				}


			}
		}

	}

	
	
	system("PAUSE");
}

