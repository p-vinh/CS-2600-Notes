// You define type of I/O
// scanf and printf
// reading two items a string and int

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	
	char str[100] = "255 34 65";

	const char *buffer = strtok(str, " ");


	while (buffer != NULL)
	{
		unsigned int number = atoi(buffer);
		printf("\nYou entered: %d\n", number);
		
		buffer = strtok(NULL, " ");
	}

	return 0;
}