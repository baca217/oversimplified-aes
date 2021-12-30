#include "helpers.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *ret = getInput();
	if(ret)
	{
		int read = strlen(ret);
		printf("total of %d chars were read\n", read);
		free(ret);
	}
	return 0;
}
