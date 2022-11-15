// gcc comparelong.c libsearch.c
// void* bsearch(const void *target, const void *table, size_t count, size_t size, int (*compFuncPtr)(const void*, const void*) );
// *target = ptr to value being searched for (void so that the data doesn't change any of the data) value you want to look for
// *table = ptr to the array getting searched through (void 'generic' const = won't change)
// count = number of elements in array
// size = size of single element of array size of data type of array (ex: int = 4 bytes double = 8 bytes)
// (*compFuncPtr)(const void*, const void*)) = function pointer - Function so that will do the compare of the data type

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(int argc, char *argv[])
{
	// function prototype - comparelong.c
	int compareLong(const void *target_ptr, const void *table_ptr);
	long longTable[MAX]; // array of long  - will need to have a compare function for data type long
	long *ptr; // pointer to item found
	int target; // target value to search for

	// initialize the array  0,1,2,...99
	for (int i = 0; i < MAX; i++)
	{
		longTable[i] = i;
	}

	// Check if arguments passed in through console are in the array
	for (int i = 1; i < argc; i++)
	{
		if (sscanf(argv[i], "%li", &target) == 1) // read argument as type long and set to variable target
		{
			ptr = bsearch(&target, longTable, MAX, sizeof(longTable[0]), compareLong);
			if (ptr == NULL)
				printf("Did NOT find %li\n", target);
			else
				printf("Found %li in array located at %i\n", target, ptr - longTable);
		}
	}
	return EXIT_SUCCESS;
}