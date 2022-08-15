#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h> /* POSIX */
#include <stdarg.h>
#include <stdint.h>
#include "main.h"


/**
 * main.h -- Main header file for _printf
 * Authors: Jaime Rodríguez - Jesús Macías - Marco Antonio Ordóñez
 *
 * @format: character string  composed of zero or more directives.
 * Return: the number of characters printed excluding the null byte
 */

typedef struct op_funct
{
	char *op_funct;
	int (*f)(char *s);

} op_t;

int new_manage(char *s);
int check_manage();
int build_manage();
int run_manage();
op_t command_func(char *c);

#endif
