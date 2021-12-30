#include "helpers.h"

#include <stdio.h>
#include <stdlib.h>

char *getInput()
{
	char *line = malloc(sizeof(char) * 256);

	if(line == NULL) //check if malloc failed
	{
		printf("malloc of line failed");
		exit(-1);
	}

	if(fgets(line, sizeof(char) * 256, stdin)) //get input from user
	{
		printf("you entered: %s\n", line);
		return line;
	}
	else //check if fgets failed
	{
		printf("fgets failed, exiting program\n");
		exit(-1);
	}
}
