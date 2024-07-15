// file 029_2c_c.c
//Lessons 26 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

void print_str ()
{
	fprintf(stdout, "Use function print_str\n");
}
void print_str_arg (char str[])
{
	fprintf(stdout, "Use function print_str_arg %s\n", str);	
}
int summ (int num1, int num2)
{
	return num1 + num2;
}
