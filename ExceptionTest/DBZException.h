// Header file for the exception class
// Define our own exception class for divide by zero
// The constructor initializes the message string
// The what( ) function returns the message string
// ---------------------------------------------------
#pragma once
#include<string>
using namespace std;

class DivideByZeroException
{
public:
	// Constructor
	// Purpose: set message in the exception object
	// Parameters: none
	// Returns: none
	DivideByZeroException();

	// The what function
	// Purpose: Return the message stored in the exception object
	// Parameters: none
	// Returns: the message
	string what() const;

private:
	string message;
};