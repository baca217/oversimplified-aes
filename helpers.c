#include "helpers.h"

#include <stdio.h>
#include <stdlib.h>

char *getInput()
{
	char *line = malloc(sizeof(char) * 256);
	int i;

	if(line == NULL)
	{
		printf("malloc of line failed");
		exit(-1);
	}

	if(fgets(line, sizeof(char) * 256, stdin))
	{
		printf("you entered: %s\n", line);
		return line;
	}
	else
	{
		printf("fgets failed, exiting program\n");
		exit(-1);
	}
}
