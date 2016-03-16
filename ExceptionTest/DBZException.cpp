#include "stdafx.h"
// Implementation file for the exception class
// Define our own exception class for divide by zero
// The constructor initializes the message string
// The what( ) function returns the message string
// ---------------------------------------------------
#include "DBZException.h"

DivideByZeroException::DivideByZeroException() : message("Zero denominator...")
{ }

string DivideByZeroException::what() const { return message; }