/* Author: Augustine Lee
   Email: lkyaugustine@gmail.com
          leekangyiaugustine@yahoo.com
*/

//Preprocessor
#include "stdafx.h" // Precompiled Header
#include <math.h>   // C Numerics Library
#include <cfloat> // C Standard Floating Point Type Library
#include <iostream> // Standard Input Output Streams Library
#include <cstdlib>  // C Standard General Utilities Library
#include <string> // allows users to type in a string of sentence or a phrase
#include <iomanip> // Parametric Manipulators

using namespace std; // using C++ standard GCC library

//main program
int main()
{
	int Q1; // Defining answers for 1st Question
	
	cout << "What do you want to do with this Finance Calculator \n"; //Questioning the user
	cout << "1) Counting Hard Cash \n"; // Counts Hard Cash
	cout << "2) Simple Interest Calculator \n"; // Calculates Simple Interest
	cout << "3) Compound Interest Calculator \n"; // Calculates Compound Interest
	cin >> Q1; // User's response

	//Leave 2 Spaces
	cout << endl;
	cout << endl;

	//Calculate Hard Cash
	if (Q1 == 1) {

		double a, b, c, d, e, f, g, h, i, j, k; // Defining highest precision for numbers that requires the largest numbers of bytes
		int l, m, n, o, p, q, r, s, t, u, v; // Defining integers
		double w; // Defining the total amount

		//Calculate $100
		cout << "Number of $100 Note(s): ";
		cin >> l;
		a = l * 100; // Calculate Value for Number of $100 Notes
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of $100 notes
		
		//Calculate $50
		cout << "Number of $50 Note(s): ";
		cin >> m;
		b = m * 50; // Calculate Value for number of $50 Notes
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of $50 notes

		//Calculate $10
		cout << "Number of $10 Note(s): ";
		cin >> n;
		c = n * 10; // Calculate Value for number of $10 Notes
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of $10 notes

		//Calculate $5
		cout << "Number of $5 Note(s): ";
		cin >> o;
		d = o * 5; // Calculate Value for number of $5 Notes
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of $5 notes

		//Calculate $2
		cout << "Number of $2 Note(s): ";
		cin >> p;
		e = p * 2; // Calculate Value for number of $2 Notes
		//Leave  1 Space
		cout << endl;
		//End of Entering Value for number of $2 notes

		//Calculate $1
		cout << "Number of $1 Coin(s): ";
		cin >> q;
		f = q * 1; // Calculate Value for number of $1 Coins
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of $1 coins

		//Calculate $0.50
		cout << "Number of 50 cents Coin(s): ";
		cin >> r;
		g = r * 0.5; // Calculate Value for number of 50 cents Coins
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of 50 cents Coins

		//Calculate $0.20
		cout << "Number of 20 cents Coin(s): ";
		cin >> s;
		h = s * 0.2; //Calculate Value for number of 20 cents Coins
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of 20 cents Coins

		//Calculate $0.10
		cout << "Number of 10 cent Coin(s): ";
		cin >> t;
		i = t * 0.1; //Calculate Value for number of 10 cents Coins
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of 10 cents Coins

		//Calculate $0.05
		cout << "Number of 5 cent Coin(s): ";
		cin >> u;
		j = u * 0.05; //Calculate Value for number of 5 cents Coins
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of 5 cents Coins

		//Calculate $0.01
		cout << "Number of 1 cent Coin(s): ";
		cin >> v;
		k = v * 0.01; //Calculate Value for number of 1 cent Coins
		//Leave 1 Space
		cout << endl;
		//End of Entering Value for number of 1 cent Coins

		w = a + b + c + d + e + f + g + h + i + j + k; //Calculating Total Amount

		cout << "Total Amount: $" << setprecision(100) << w << endl; //Allowing user to view total amount
	}

	//Calculate Simple Interest
	if (Q1 == 2) {

		int Q2;
		cout << "Borrow or Lend Money?\n"; //Question user
		cout << "1) Borrow \n"; //User borrowed money and wants to calculate how much the user owes
		cout << "2) Lent   \n"; //User lent money and wants to calculate how much the user's borrower owes
		cin >> Q2;
		//Leave 2 Spaces
		cout << endl;
		cout << endl;

		//Calculating payment
		if (Q2 == 1) {
			
			string time; //Define time
			double UnitOfTime; //Defines the unit of time; be it in days, weeks, months, years etc...
			double InterestRates;  //Defines Interest Rates in positive numbers; x
			double NewInterestRates; //Defines Interest Rates in Percentage; x/100
			long double MoneyBorrowed; //Defines the amount of money the user borrowed
			long double OverallInterestRate; //Defines the overall interest unit-of-time by unit-of-time

			cout << "Amount of money borrowed (in dollars): \n"; //Questions the user how much money the user has borrowed
			cin >> MoneyBorrowed; //User's response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the interest rate: \n"; //Questions the user what is the interest rate
			cin >> InterestRates; //User's Response
			//Calculate Interest rate into Percentage
			NewInterestRates = InterestRates / 100;
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the unit of time in (e.g. days, weeks, months) \n"; //Questions the user to input unit of time
			cin >> time; //User's Response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the number of " << time << ". \n"; //Asking the user for a value
			cin >> UnitOfTime; //User's Response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			
			for (int f = 0; f<= UnitOfTime; f++) {

				OverallInterestRate = NewInterestRates * MoneyBorrowed; //Calculates overall interest rates
				long double TotalInterestRates; //Defines what Total Interest Rate is to the Compiler
				long double NewMoney; //Defines total amount of money the user has to pay

				TotalInterestRates = OverallInterestRate * f; //Calculates Interest on Unit-of-time <x>
				NewMoney = TotalInterestRates + MoneyBorrowed; //Calculate overall payment the user has to make

				cout << f << " " << time << "-----$" << setprecision(12) << NewMoney << endl; // <y> Unit-of-time ----- $<x>
				cout << "You would have to pay $" << setprecision(12) << NewMoney << " in " << f << " " << time << endl; // Sentence
				cout << "You would lose $" << setprecision(12) << TotalInterestRates << " in " << f << " " << time << endl; //Loss made
				//Leave 2 Spaces
				cout << endl;
				cout << endl;
				//Reloop or end loop
				
			}	//End of "for" loop

		}// End of calculating loss and payments


		//Calculating revenue
		if (Q2 == 2) {

			string time; //Define time
			double UnitOfTime; //Defines the unit of time; be it in days, weeks, months, years etc...
			double InterestRates;  //Defines Interest Rates in positive numbers; x
			double NewInterestRates; //Defines Interest Rates in Percentage; x/100
			long double MoneyLent; //Defines the amount of money the user lent
			long double OverallInterestRate; //Defines the overall interest unit-of-time by unit-of-time

			cout << "Amount of money lent (in dollars): \n"; //Questions the user how much money the user has borrowed
			cin >> MoneyLent; //User's response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the interest rate: \n"; //Questions the user what is the interest rate
			cin >> InterestRates; //User's Response
			//Calculate Interest rate into Percentage
			NewInterestRates = InterestRates / 100;
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the unit of time in (e.g. days, weeks, months) \n"; //Questions the user to input unit of time
			cin >> time; //User's Response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the number of " << time << ". \n"; //Asking the user for a value
			cin >> UnitOfTime; //User's Response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;

			for (int f = 0; f <= UnitOfTime; f++) {

				OverallInterestRate = NewInterestRates * MoneyLent; //Calculates overall interest rates
				long double TotalInterestRates; //Defines what Total Interest Rate is to the Compiler
				long double NewMoney; //Defines total amount of money the user would earn

				TotalInterestRates = OverallInterestRate * f; //Calculates Interest on Unit-of-time <x>
				NewMoney = TotalInterestRates + MoneyLent; //Calculate overall revenue the user has to make

				cout << f << " " << time << "-----$" << setprecision(12) << NewMoney << endl; // <y> Unit-of-time ----- $<x>
				cout << "You would get $" << setprecision(12) << NewMoney << " in " << f << " " << time << endl; // Sentence
				cout << "You would earn $" << setprecision(12) << TotalInterestRates << " in " << f << " " << time << endl; //Profit made
				//Leave 2 Spaces
				cout << endl;
				cout << endl;
				//Reloop or end loop

			} //End of "for" loop

		}//End of calculating revenue and profit

	}// End of calculating Simple Interest


	//Calculating Compound Interest
	if (Q1 == 3) {

		int Q2;
		cout << "Borrow or Lend Money? \n"; //Questions the user
		cout << "1) Borrow \n"; //User borrowed money and wants to calculate how much the user owes
		cout << "2) Lend \n"; //User lent money and wants to calculate how much the lender has to pay
		cin >> Q2;
		//Leave 2 Spaces
		cout << endl;
		cout << endl;
		//End of questioning

		//User borrowed
		if (Q2 == 1) {

			string time; //Time in units (e.g. days, weeks, months, years, decades)
			double MoneyBorrowed; //Defines the amount of money borrowed
			double InterestRates; //Defines Interest Rates without Percentage
			double NewInterestRates; //Defines Interest Rate in Percentage
			double UnitOfTime; //Defines the value of time

			cout << "Amount of money borrowed: \n"; //Questions the user how much money he/she has borrowed
			cin >> MoneyBorrowed; //User's Response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning 

			cout << "State the interest rate: \n"; //Question the user the interest rate
			cin >> InterestRates; //User's Response
			//Calculate into percentage
			NewInterestRates = InterestRates / 100;
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the unit of time in (e.g. days, weeks, months, years, decades) \n"; //Questions the user the unit of time it wants to calculate
			cin >> time; //User's Response 
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the number of " << time << ". \n"; //Ask the user an integer
			cin >> UnitOfTime; //User's Response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			for (int c = 0; c <= UnitOfTime; c++) {

				long double OverallPayment; //Defines the overall interest rate after the original payment
				OverallPayment = MoneyBorrowed * pow(1 + NewInterestRates, c); //Formula for Compound Interest
				long double loss; //Calculating how much the user would lose
				loss = OverallPayment - MoneyBorrowed;// Calculating Losses

				cout << c << " " << time << "-----$" << setprecision(12) << OverallPayment << endl; // Summarises the information up
				cout << "You would have to pay $" << setprecision(12) << OverallPayment << " in " << c << time << ". " << endl; //Information in full sentence
				cout << "You would lose $" << setprecision(12) << loss << " in " << c << time << ". " << endl; //Telling the user how much he/she lose
				//Leave 2 Spaces
				cout << endl;
				cout << endl;

			}//End of telling the user



		}//End of calculating payment

		if (Q2 == 2) {

			string time; //Time in units (e.g. days, weeks, months, years, decades)
			double MoneyLent; //Defines the amount of money lent
			double InterestRates; //Defines Interest Rates without Percentage
			double NewInterestRates; //Defines Interest Rate in Percentage
			double UnitOfTime; //Defines the value of time

			cout << "Amount of money lent: \n"; //Questions the user how much money he/she has lent
			cin >> MoneyLent; //User's Response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning 

			cout << "State the interest rate: \n"; //Question the user the interest rate
			cin >> InterestRates; //User's Response
			//Calculate into percentage
			NewInterestRates = InterestRates / 100;
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the unit of time in (e.g. days, weeks, months, years, decades) \n"; //Questions the user the unit of time it wants to calculate
			cin >> time; //User's Response 
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			cout << "State the number of " << time << ". \n"; //Ask the user an integer
			cin >> UnitOfTime; //User's Response
			//Leave 2 Spaces
			cout << endl;
			cout << endl;
			//End of questioning

			for (int c = 0; c <= UnitOfTime; c++) {

				long double OverallRevenue; //Defines the overall interest rate after the original payment
				OverallRevenue = MoneyLent * pow(1 + NewInterestRates, c); //Formula for Compound Interest
				long double Profit; //Calculating how much the user would lose
				Profit = OverallRevenue - MoneyLent;//Calculating Profit

				cout << c << " " << time << "-----$" << OverallRevenue << endl; // Summarises the information up
				cout << "You would get $" << setprecision(12) << OverallRevenue << " in " << c << time << ". " << endl; //Information in full sentence
				cout << "You would earn $" << setprecision(12) << Profit << " in " << c << time << ". " << endl; //Telling the user how much he/she earns
				//Leave 2 Spaces
				cout << endl;
				cout << endl;

			}//End of calculating Revenue for Compound Interest

		}//End of calculating compound interest

	}


	system("PAUSE");
}

