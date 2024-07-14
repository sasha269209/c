// file 026_c.c
//Lessons 23 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

void f_string (char str[]);
int sum_num (int num_1, int num_2);
int f_cub (int x);

int main ()
{
	f_string("Hello");
	char st[] = "World";
	f_string(st);
	printf("sum_num = %d\n", sum_num(5, 8));
	printf("f_cub = %d\n", f_cub(5));
}

void f_string (char str[])
{
	printf("Func f_string %s\n", str);
}

int sum_num (int num_1,int num_2)
{
	return num_1 + num_2;
}

int f_cub (int x)
{
	return x * x * x;
}