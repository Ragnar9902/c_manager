#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int build_manage(char *s)
{
	char dest[] = "gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o ";	

	strncat(dest, s, 100);
	system(dest);
	printf("the proyect compile sucess \n");
	printf("the name of the exe file is: %s \n", s);

	return(1);
}

int new_manage(char *s)
{	
	char *dest = (char *)malloc(1024*sizeof(char));
	
	strcat(dest, s);
	strncat(dest, "/src", 10);
	mkdir(s, 0777);
	mkdir(dest, 0777);
	printf("an new proyect name %s has been created", s);
	return(1);
}

int check_manage()
{
	printf("the program compile good");
	return(1);
}

int run_manage()
{
	printf("the program is running");
	return(1);

