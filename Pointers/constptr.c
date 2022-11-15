#include <stdio.h>

void main()
{
	// declares ptr a pointer to const int type.
	const int *ptrA;

	// You can modify ptr itself but not the dereferenced value.
	// Example
	const int ten = 10;
	const int *ptrB = &ten;

	*ptrB = 5; // wrong   -- Can NOT modify the value that ptr is pointing to
	ptrB++; // right

	// declares ptr a const pointer to int type.
	int *const ptrC;

	// You are NOT allowed to modify ptr but you can modify the dereferenced value.
	// Example

	int hundred = 100;
	int *const ptrD = &hundred;

	*ptrD = 5; // right
	ptrD++; // wrong -- can NOT change pointer value
}