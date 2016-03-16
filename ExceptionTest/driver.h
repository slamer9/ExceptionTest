#pragma once
// Divide by zero problem with exception handling
// Header file for the driver
// CNS 1410
// Roger deBry
// February 2015
// ---------------------------------------------------

#include <iostream>
#include <string>
#include "DBZException.h"
using namespace std;

// The divide function
// Purpose: Return the value of n divided by d
// Parameters: two integers, n and d
// Returns: a double, n/d
// Exceptions: Throws a Divide by Zero Exception if d is zero
double divide(int, int);
/*int driverMain();*/