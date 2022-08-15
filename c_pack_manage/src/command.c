#include <limits.h>
#include <stdio.h>
#include <unistd.h> /* POSIX */
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include "main.h"
#include <string.h>

op_t command_func(char *c)
{
	op_t ops[] = {
		{"new", new_manage},
		{"build", build_manage},
		{"run", run_manage},
		{"check", check_manage},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op_funct != NULL)
	{
		if (strcmp(c, ops[i].op_funct) == 0)
			break;
		i++;
	}
	if(ops[i].op_funct==NULL)
		printf("enter a valid command");

	return (ops[i]);
}
