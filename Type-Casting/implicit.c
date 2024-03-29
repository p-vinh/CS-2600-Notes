// Compiler will automatically typecast to move to larger size. Model shown below
/*     bool -> char -> short int -> int ->
	   unsigned int -> long -> unsigned ->
	   long long -> float -> double -> long double  */

// An example of implicit conversion THIS IS AUTOMATICALLY CONVERTED BY COMPILER
#include <stdio.h>

int main()
{
	int x = 10;	  // integer x
	char y = 'a'; // character c

	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y; // adding two different types compiler will typecast with model above char->int

	// x is implicitly converted to float
	float z = x + 1.0;

	printf("x = %d, z = %f", x, z);

	return 0;
}