#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(int ac, char **av)
{

    	if(ac>1)
	{	
		int (*command)(char *s);
		op_t f = command_func(av[1]);

		command = f.f;

		if (f.op_funct != NULL)
		{	
			if(ac>2)
			{	command(av[2]);
				exit(0);
			}
			command(av[1]);
			exit(0);
		}
		
		exit(0);
    	}

	printf("recipe is a packagees manager that make easy to to desing and de build and deploy proyects in several programming languages");
  
    	system("dir");
	return(1);
}
