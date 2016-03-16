#include "stdafx.h"
// Divide by zero problem with exception handling
// Implementation file for the driver
// CNS 1410
// Roger deBry
// February 2015
// ---------------------------------------------------
#include "driver.h"
#include <exception>

int /*driver*/main()
{
	int num1, num2;
	double quotient;

	// run until user types a zero numerator
	do
	{
		// Get two numbers from the user
		cout << "\nEnter two integers:";
		cin >> num1 >> num2;

		if (num1 != 0) // test for exit condition
		{

			// The try block - contains the line that might cause an exception
			// and code to be skipped if an exception happens
			try
			{
				quotient = divide(num1, num2);
				cout << num1 << "/" << num2 << " = " << quotient;
			}

			// if an excdeption is thrown, execute the code in the catch block
			/*catch (DivideByZeroException e)*/
			catch (exception)
			{
				// display message in the exception object
				/*cout << e.what();*/
				cout << "Test 1." << endl;
			}
		} // end of if

	} while (num1 != 0);

	return 0;
}

double divide(int n, int d)
{
	// Test the denominator and throw an exception if it is zero
	if (d == 0)
		throw DivideByZeroException();

	// otherwise do the division
	// cast n so that we don't do integer division
	return static_cast<double>(n) / d;
}

